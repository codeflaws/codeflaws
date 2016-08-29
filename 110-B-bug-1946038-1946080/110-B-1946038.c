#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i;
    scanf("%d",&n);
    char s[]="abcd";
    for(i=1;i<=(n/4);i++)printf("%s",s);
    for(i=1;i<=(n%4);i++)printf("%c",s[i]);
    return 0;
}