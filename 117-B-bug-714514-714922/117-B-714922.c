#include <stdio.h>

int main(int argc, char *argv[])
{
 long a,b,mod,i,j;
 
 scanf("%ld%ld%ld",&a,&b,&mod);
 for(i=0;i<=a&&i<mod;i++)
   if(((long long)i*1000000000LL-1+mod)%mod-mod+1<-b)
    {
     printf("1 %.9ld\n",i);
     return 0;
    }
 printf("2\n");
 
 return 0;
}
