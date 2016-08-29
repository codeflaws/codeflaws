#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char s[100];
    int i,n,l;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        gets(s);
        l=strlen(s);
        if(l>10){
            printf("%c%d%c",s[0],l-2,s[l-1]);
        }
        else{
            printf("%s\n",s);
        }
    }

    return 0;
}
