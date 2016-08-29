#include<stdio.h>

int main(int argc, char *argv[])
{
  int s[3],i=0,n=0,t=0;
  for(;i<3;i++)
  {scanf("%i",&s[i]);n=n+s[i];}
  i=0;
  while(n>0)
  {    if(s[i]>=2)
    { s[i]=s[i]-2;
       n=n-2;
     }
     else
     {
     n=n-s[i];
     s[i]=s[i]-s[i]; }
     i=i+1;
     i=i%3;
 t++;
   }
  printf("%i",t+30);
  return 0;
}