#include<stdio.h>
long long int a[100009],cum;
int main(int argc, char *argv[])
{
	long long int t,n,i,j,f=0,ans=0;
	scanf("%lld %lld",&n,&t) ;
	j=0;    
	for(i=0;i<n && j<=i;i++)
	{
	scanf("%lld",&a[i]);
	cum=cum+a[i];
	if(cum>t)
	cum=cum-a[j++];
	if(ans<i-j+1)
	ans=i-j+1;
	}
	printf("%lld\n",ans);
	return 0;
}
