#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	static long long int x[200005],y[200005],sum[400005],dif1[400005],dif2[400005];
	memset(sum,0,sizeof(sum));
	memset(dif1,0,sizeof(dif1));
	memset(dif2,0,sizeof(dif2));
	long long int num,i,s=0;
	scanf("%lld",&num);
	for(i=0;i<num;i++)
	{
	scanf("%d%d",&x[i],&y[i]);
	sum[x[i]+y[i]]++;
	if(x[i]<=y[i]){
	dif1[y[i]-x[i]]++;
}
else if(x[i]>y[i])
	{
		dif2[x[i]-y[i]]++;	
	}
}
    for(i=0;i<=400005;i++)
   {
	s=s+(sum[i]*(sum[i]-1))/2+(dif1[i]*(dif1[i]-1))/2+(dif2[i]*(dif2[i]-1))/2;
   }
   printf("%lld\n",s);
   return 0;
}