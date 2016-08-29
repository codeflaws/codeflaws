#include<stdio.h>
int main(int argc, char *argv[])
{
 int n,k,a[200],t,i,l,y;
 scanf("%d%d",&n,&k);
 l=2*n+1;
 scanf("%d",&a[0]);
 y=0;
 t=0;
for(i=1;i<l;i++)
 {scanf("%d",&a[i]);
  if(t<k)
    if(a[i-1]-a[i]>1&&y<a[i-1])

 {a[i-1]=a[i-1]-1;
     t++;
     }
 y=a[i-1];
 }

for(i=0;i<l;i++)
printf("%d ",a[i]);



   return 0;
   }
