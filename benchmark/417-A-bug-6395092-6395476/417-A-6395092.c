#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
 int c,d,m,n,k,i,j,l,prob,cont;
 float ratio;
 scanf("%d%d%d%d%d",&c,&d,&n,&m,&k);
 
 cont=n*m;
 ratio=(float)c/n; 
 //printf("%f ",ratio);
 i=k;
 prob=0;
 if(i>=cont)
   printf("%d\n",prob);
 else
 {
  l=cont-i;
  while(l>0)
  {
   
   if((l*d)>c)
   {
    prob+=c;
    i+=n;
    l=cont-i;
   }
   else
   {
    prob+=d;
    i+=1;
    l=cont-i;
   }
  }
  printf("%d\n",prob);
 }  
 
 return 0;
}
