#include<stdio.h>

int main(int argc, char *argv[])
{
    char a[100], b[100];
    int i, x;

    for(i=0; ; i++)
    {
        scanf("%c", &a[i]);
        if(a[i]=='\n')
        {
            break;
        }
    }

    x=i;

    for(i=0; i<x; i++)
    {
        scanf("%c", &b[i]);
    }
    for(i=0; i<x; i++)
    {
        if(a[i]==b[i])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }

    return 0;
}
