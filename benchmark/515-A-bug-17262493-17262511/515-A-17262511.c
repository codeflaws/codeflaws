#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    int a,b,c,d,n;
    scanf("%d %d %d",&a,&b,&c);
    a=abs(a);
    b=abs(b);
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
