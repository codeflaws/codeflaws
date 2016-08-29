#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long long int n,last=0,first=1000000000,max,min,i,num1,num2;
    scanf("%lld",&n);
    int ara[100000];
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);

    min=ara[1]-ara[0];

    max=ara[n-1]-ara[0];
    printf("%lld %lld\n",max,min);

    for(i=1;i<n-1;i++)
    {
        num1=ara[i]-ara[i-1];

        num2=ara[i+1]-ara[i];

        if(num1<num2) min=num1;
        else min=num2;

        num1=ara[i]-ara[0];
        num2=ara[n-1]-ara[i];


        if(num1>num2) max=num1;
        else max=num2;
        printf("%lld %lld\n",min,max);
    }

    min=ara[i]-ara[n-2];
    max=ara[i]-ara[0];
    printf("%lld %lld\n",min,max);


    return 0;
}
