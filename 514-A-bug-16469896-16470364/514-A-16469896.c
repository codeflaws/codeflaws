#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>

long long int power(int x,int y)
{
    long long int sum=1;
    for(y;y>0;y--)
    {
        sum*=x;
    }
    return sum;
}

int main(int argc, char *argv[])
{
    char a[20];
    scanf("%s",a);
    int i,digit;
    long long unsigned x=0;
    
    
    for(i=0;i<strlen(a);i++)
    {
        digit=a[i]-48;
        if(digit>9-digit) digit=9-digit;
        x+=digit*power(10,strlen(a)-i-1);
    }
    
    printf("%lld",x);

    
    return 0;
}
