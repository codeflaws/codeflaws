#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,c,d,n;
    scanf("%d %d %d",&a,&b,&c);
    a=a+b;
    if(a>c)
        printf("No");
    else
    {
        a=c-a;
        if(a%2==0)
            printf("Yes");

        else
            printf("No");
    }

    return 0;
}
