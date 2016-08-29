#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100000+1

int main(int argc, char *argv[])
{
    int i, k, sev_q, four_q, last_four_idx, four_c = 0, sev_c = 0, last_idx;
    char *in  = (char*)calloc(N + 2, 1);

    scanf("%s", in+1);

    sev_q  = in[1] == '7';
    four_q = in[1] == '4';
    
    if (four_q) {
        last_four_idx = 1;
        four_c++;
    }
    else if (sev_q) {
        last_four_idx = 0;
        sev_c++;
    }
    else if (in[1] < '4') {
        in[1] = '4';
        four_c++;
    }
    else if (in[1] > '4' && in[1] < '7') {
        in[1] = '7';
        sev_c++;
    }
    else if (in[1] > '7') {
        in[0] = '4';
        in[1] = '4';
        four_c += 2;
    }

    i = 2;
    while (in[i]) {
        if (sev_q) {
            sev_q = 0;
            if (in[i] < '4') {
                in[i] = '4';
                four_c++;
            }
            else if (in[i] == '4') {
                four_q = 1;
                four_c++;
            }
            else if (in[i] > '4' && in[i] < '7') {
                in[i] = '7';
                sev_c++;
            }
            else if (in[i] > '7') {
                if (last_four_idx == 0) {
                    in[last_four_idx] = '4';
                    four_c++;
                }
                else {
                    in[last_four_idx] = '7';
                    sev_c++;
                    four_c--;
                }
                sev_c -= i - 1 - last_four_idx;
                four_c += i - last_four_idx;
                for (k = last_four_idx+1; k <= i; k++)
                    in[k] = '4';
            }
            else {
                sev_q = 1;
                sev_c++;
            }
        }
        else if (four_q) {
            four_q = 0;
            if (in[i] < '4') {
                in[i] = '4';
                four_c++;
            }
            else if (in[i] > '4' && in[i] < '7') {
                in[i] = '7';
                sev_c++;
            }
            else if (in[i] > '7') {
                in[i] = '4';
                in[i-1] = '7';
                sev_c++;
            }
            else if (in[i] == '7') {
                sev_q = 1;
                last_four_idx = i - 1;
                sev_c++;
            }
            else {
                four_q = 1;
                four_c++;
            }
        }
        else {
            size_t len = strlen(in+i);

            memset(in + i, '4', len);
            four_c += len;
            i += len;
            break;
        }
        i++;
    }

    in = in[0] == '\0' ? in + 1 : in;

    printf("%s\nfour=%u, seven=%u\n", in, four_c, sev_c);

    i--;
    last_idx = i;

    if ((four_c + sev_c) % 2 != 0) {
        int seq = (four_c + sev_c) / 2 + 1;
        
        memset(in, '4', seq);
        memset(in + seq, '7', seq);
    }
    else if (sev_c > four_c) {
        while (i >= 0) {
            if (in[i] == '7') {
                int k = i;

                while (i >= 0 && in[i] == '7') i--;

                if (i < 0) {
                    int seq = (four_c + sev_c) / 2 + 1;

                    memset(in, '4', seq);
                    memset(in + seq, '7', seq);
                    break;
                }
                else {
                    in[i] = '7';
                    sev_c++;
                    four_c--;
                    memset(in + i + 1, '4', k-i);
                    four_c += k-i;
                    sev_c -= k-i;
                    i++;
                }
                if (sev_c < four_c) {
                    i = last_idx;
                    while (i >= 0) {
                        if (in[i] == '4') {
                            in[i] = '7';
                            four_c--;
                            sev_c++;
                        }
                        if (four_c == sev_c)
                            break;
                        i--;
                    }
                }
            }
            if (four_c == sev_c)
                break;
            i--;
        }
    }
    else if (four_c > sev_c) {
        while (i >= 0) {
            if (in[i] == '4') {
                in[i] = '7';
                four_c--;
                sev_c++;
            }
            if (four_c == sev_c)
                break;
            i--;
        }
    }

    printf("%s\nfour=%u, seven=%u\n", in, four_c, sev_c);

    return 0;
}

