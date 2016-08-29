#include<stdio.h>
#include<math.h>
long long int n,i,j,t,d,h[100005];
int main(int argc, char *argv[])
{
	scanf("%lld%lld",&n,&d);
	for(i=0;i<n;i++)
		scanf("%lld",h+i);
	for(i=0;i<n;i++)
		for(j=i;j<n;j++)
			if(i!=j && abs(h[i]-h[j])<=d)t++;
	printf("%lld",t);
	return 0;
}
