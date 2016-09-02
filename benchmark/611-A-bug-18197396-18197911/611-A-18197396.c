#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,days;
    scanf("%d",&n);
    char str[20];
    gets(str);
    int l=strlen(str);
    if(str[l-1]=='k')
    {
        if(n<=4) days=52;
        else if(n==5 || n==6) days=53;
    }

    else{

        if(n<=29) days=12;
        else if(n=30) days=11;
        else days=7;
    }
    printf("%d\n",days);
    return 0;
}
