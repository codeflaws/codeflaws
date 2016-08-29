#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int i,j,temp,k=1;
    char s[100];
    gets(s);
    int l=strlen(s);
    char g[100];
    gets(g);
    int m=strlen(g);

    for (j=l;j>0;j--){
        for (i=0;i<(j-1);i++){
            if (s[i]>s[i+1]){
                temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
            }
        }
    }

    if(s[0]=='0'){
        for(i=1;i<l;i++){
            if(s[i]!='0'){
                s[0]=s[i];
                s[i]='0';
                break;
            }
        }
    }

    if(l==m){
        for(i=0,j=0;i<l,j<m;i++,j++){
            if(s[i]!=g[j]){
                k=0;
                break;
            }
            else k++;
        }
    }
    else k=0;
    if(k==1) printf("OK");
    else printf("WRONG_ANSWER");

    return 0;
}
