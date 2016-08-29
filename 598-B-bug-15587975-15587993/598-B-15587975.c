#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char s[10010];
    int m, l, r, k;
    gets(s);
    int len = strlen(s);
    for (m=0;m<len;m++){
        if (s[0] = s[m])
            continue;
        else
            break;
    }
    if (m == len)
        puts(s);
    else{
        scanf("%d",&m);
        while(m--){
            scanf("%d%d%d",&l,&r,&k);
            l -= 1;
            r -= 1;
            k %= (r-l+1);
            int h = (r-l+1)/2;
            if (k<=h){
                while(k--){
                    int temp = s[r];
                    for (int i=r;i>l;i--){
                        s[i] = s[i-1];
                    }
                    s[l] = temp;
                }
            }
            else {
                k = (r-l+1)-k;
                while(k--){
                    int temp = s[l];
                    for (int i=l;i<r;i++){
                        s[i] = s[i+1];
                    }
                    s[r] = temp;
                }
            }
        }
        puts(s);
    }

return 0;
}
