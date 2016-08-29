#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,count,t,sum=0,s;

    scanf("%d%d",&a,&b);

    t=a;
    s=a;
    while(s>1)
    {
        sum+=a/b;
        a=a/b+a%b;
        s/=b;
    }

    printf("%d",sum+t);
return 0;
}
