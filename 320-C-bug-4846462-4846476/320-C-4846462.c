#include<stdio.h>
#define MOD 1000000007
int main(int argc, char *argv[])
{
   long long int num=0;
   int f=0;
   char c[105];
   scanf("%s",c);
   for(f=0;c[f]!='\0';f++)
   {
            if(c[f]=='1')
             num++;
            num*=2;
            num = num % MOD;
    }
    for(;f>2;f--)
    {
        num*=2;
        num = num % MOD;
    }
    printf("%lld\n",num);
return 0;
}
