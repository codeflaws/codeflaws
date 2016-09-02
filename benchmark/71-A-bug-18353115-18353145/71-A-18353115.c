#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char s[100];
    int i,length,n;
    scanf("%d", &n);
    for(i=0;i<=n;i++){
    gets(s);
    length=strlen(s);
    if(length>10){
        printf("%c%d%c",s[0],length-2,s[length-1]);
    }
    else{
        printf("%s\n",s);
    }
    }
    return 0;

}
