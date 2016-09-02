#include<stdio.h>
int main(int argc, char *argv[])
{
int n,p,i;
scanf("%d%d",&n,&p);
int a[n],b[n];
int k;
for(i=0;i<n;i++)
scanf("%d%d",&a[i],&b[i]);
double sum=0,c,c1;
int e,d;
for(i=0;i<n;i++)
{
e=((b[i]/p) - ((a[i]-1)/p));
//printf("e %d\n",e);
c=(double)e/(b[i]-a[i]+1);
d=((b[(i+1)%n]/p)-((a[(i+1)%n]-1)/p));
printf("d %d\n",d);
c1= (double)d/(b[(i+1)%n]-a[(i+1)%n]+1);
sum=sum+((1-(1-c)*(1-c1)))*2000;
//printf("c %lf c1 %lf\n",c,c1);
}
printf("%lf\n",sum);
return 0;
}

