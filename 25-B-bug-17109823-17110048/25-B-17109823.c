#include<stdio.h>
int main(int argc, char *argv[])
{
    char a[20];
    int i,l,x;
    scanf("%d",&x);
    scanf("%s",&a);
    l=strlen(a);
    if(l%2==0)
    {
        for(i=0; i<l; i++)
        {
            if(i!=0&&i%2==0)
            {
                printf("-%c",a[i]);
            }
            else
            {
                printf("%c",a[i]);
            }
        }
    }
    else
    {
        for(i=0; i<l; i++)
        {
            if(i!=0&&i%2==0&&i!=l-1)
            {
                printf("-%c",a[i]);
            }
            else
            {
                printf("%c",a[i]);
            }
        }
    }
return 0;
}
