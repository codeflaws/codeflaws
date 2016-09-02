#include<stdio.h>
#include <inttypes.h>
#define maxn 100000
struct random
{
	int64_t x,y; 
};
double qw=0,m=1,c[maxn],b[maxn];
int n,i;
int64_t p;
struct random a[maxn];
int main(int argc, char *argv[])
{
	scanf("%d%lld",&n,&p);
	for(i=0;i<n;i++)
	{scanf("%lld%lld",&a[i].x,&a[i].y);}
	for(i=0;i<n;i++)
	{
		c[i]=a[i].y/p-a[i].x/p;
		if(a[i].x%p==0)c[i]+=1;
		b[i]=a[i].y-a[i].x+1;
	}
	for(i=1;i<n-1;i++)
	{
		qw+=1000*(b[i]*c[i-1]+b[i-1]*c[i]-c[i]*c[i-1])/b[i]/b[i-1];
		qw+=1000*(b[i]*c[i+1]+b[i+1]*c[i]-c[i]*c[i+1])/b[i]/b[i+1];
	}
	qw+=2000*(b[0]*c[n-1]+b[n-1]*c[0]-c[0]*c[n-1])/b[0]/b[n-1];
	qw+=1000*(b[1]*c[0]+b[0]*c[1]-c[1]*c[0])/b[1]/b[0];
	qw+=1000*(b[n-2]*c[n-1]+b[n-1]*c[n-2]-c[n-2]*c[n-1])/b[n-2]/b[n-1];
	printf("%.7lf\n",qw);
	return 0;
}
