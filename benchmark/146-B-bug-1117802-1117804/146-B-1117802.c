#include<stdio.h>
int mask(int c);
int main(int argc, char *argv[])
{
    long int a,b,c;
    scanf("%ld%ld",&a,&b);
    c=a;
    if(a==b)
    c++;
    while(mask(c)!=b)
     c++;
     printf("%ld",c);
     return 0;
}
int mask(int c)
{
    int n=0,b,i=1;
    while(c!=0)
    {
        b=c%10;
        if(b==4||b==7)
        {   n=b*i+n;
             i=i*10;
        }
       c/=10;
    }
    return n;
}