#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int l, i,x=0;
    char ara[100];
    scanf("%s",&ara);
    l=strlen(ara);
    for(i=0; i<l; i++)
    {
        if(ara[i]==72 || ara[i]==81 || ara[i]==57 || ara[i]==43)
        {
            x=1;
        }
    }
    if(x==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
