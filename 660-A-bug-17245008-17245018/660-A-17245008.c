#include <stdio.h>

int gcd(int a, int b)
{
	if(b==0)
	return a;
	else return gcd(b,a%b);
}


int main(int argc, char *argv[])
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	int ans[n] ;
	for(i=0;i<n;i++)
		ans[i] = 0;
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	int cnt =0;
	for(i=0;i<n-1;i++)
	{
		if(gcd(a[i],a[i+1])!=1)
			ans[i] = 1,cnt++;
	}

	
	
	if(n==1)
		printf("0 \n%d",a[0]);
	else{
		printf("%d\n",cnt);
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
			if(ans[i]) printf("%d ",i);
		}
	}

	return 0;
}
