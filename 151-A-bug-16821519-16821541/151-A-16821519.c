#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
int n,k,l,c,d,p,nl,np,i,j,es,s,q,a[4],min,res,r;
scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);
r=(k*l);
a[0]=(r/nl);
a[1]=(c*d);
a[2]=(p/np);
min=a[0];
for(i=0;i<3;i++)
{
if(a[i]<min)
min=a[i];
}
printf("%d\n",min);
res=(min/n);
printf("%d",res);
return 0;
}
  
 

