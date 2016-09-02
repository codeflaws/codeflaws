#include <stdio.h>
#include <stdlib.h>

long long removeZero(long long a);

int main(int argc, char *argv[])
{
    long long a,b,c1,c2;

    scanf("%I64d",&a);
    scanf("%I64d",&b);
    c1 = a + b;


    a = removeZero(a);
    b = removeZero(b);
    c2 = removeZero(c1);
    if(a+b==c2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}



long long removeZero(long long a)
{
    int i,num=0;


    for(i=0; a != 0; i++)
    {
        if(a%10 != 0)
        {
            num = num * 10 + a % 10;
        }
        a = a/10;
    }
    for(i=0; num != 0; i++)
    {
        a = a * 10 + num % 10;
        num = num / 10;
    }



    return a;
}
