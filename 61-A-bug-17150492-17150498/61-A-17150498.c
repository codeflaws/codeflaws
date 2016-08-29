#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    char n1[102],n2[102],a[102];
    int Length,Loop;

    scanf("%s",n1);
    scanf("%s",n2);

    Length=strlen(n1);

    for(Loop=Length-1;Loop>=0;Loop--)
    {
        if(n1[Loop]==n2[Loop])
            a[Loop]='0';
        else
            a[Loop]='1';

    }
    a[Length]='\0';

    printf("%s\n",a);
    return 0;



}
