#include <stdio.h>

#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))

int main(int argc, char *argv[])
{
 long a,b,c,d,e,f;
 
 scanf("%ld%ld%ld%ld%ld%ld",&a,&b,&c,&d,&e,&f);
 printf("%ld\n",max(0,min(f-e,min(min(a,b),min(c,d))-e))); 

 return 0;
}