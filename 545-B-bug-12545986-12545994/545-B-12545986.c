#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {

    int n,i;
    char s1[100005],s2[100005];
    char s3[100005];

    int diffones = 0;
    int diffzeros = 0;
    int diff = 0;
    scanf("%s",&s1);
    scanf("%s",&s2);
    strcpy(s3,s2);
    n = strlen(s1);

    for (i=0 ; i<n ; i++) {
        if (s1[i] == '1') {
            if (s2[i] != '1') {
                diff++;
            }
        } else {
            if (s2[i] != '0') {
                diff++;
            }
        }
    }

    if (diff%2 != 0) {
        printf("impossible");
    } else {
        int check = 0;
        for (i=0 ; i<n ; i++) {
            if (s1[i] != s2[i]) {
                if (check) {
                    check = 0;
                } else {
                    check = 1;
                }

                if (check) {
                    s3[i] = s1[i];
                } else {
                    s3[i] = s2[i];
                }
            }
        }
        s3[n] = s1[n];
    }
    printf("%s",s3);

    return 0;
}

