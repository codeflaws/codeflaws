//emre
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int a,b,c,d,n,len;
    char str[100];
    gets(str);
    len=strlen(str)-2;
    while(str[len==' '])
    {
        len--;
    }
    if(str[len]=='A' || str[len]=='a' || str[len]=='E' || str[len]=='e' || str[len]=='I' || str[len]=='i' || str[len]=='O' || str[len]=='o' || str[len]=='U' || str[len]=='u' || str[len]=='Y' || str[len]=='y')
    
    {
        printf("YES");
    }
    else
    printf("NO");
    
    return 0;
}