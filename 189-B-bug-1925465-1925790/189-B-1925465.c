#include<stdio.h>
int main(int argc, char *argv[])
{
    long long int w,h,p,q,r,s;
    scanf("%lld %lld",&w,&h);
   p=w;q=w;r=h;s=h;
   if(w<2||h<2)
    printf("0");
   if(w%2!=0)
   {
   p=w-1;q=w+1;
}
   if(h%2!=0)
   {
   r=h-1;s=h+1;
}
                             
   printf("%lld",(p*q*r*s)/16);
    
    return 0;
     }                         
