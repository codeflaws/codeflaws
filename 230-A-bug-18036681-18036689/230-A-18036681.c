#include<stdio.h>
int main(int argc, char *argv[])
{
	long long int s,n,i,j,flag,swap1,swap2;
	scanf("%lld%lld",&s,&n);
	long long int a[n][2];
	for(i=0;i<n;i++)
	{
	for(j=0;j<2;j++)
	{
	  scanf("%lld",&a[i][j]);	
	}}
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-i);j++)
		{
			if(a[j][0]>a[j+1][0])
			{
			swap1=a[j][0];
			a[j][0]=a[j+1][0];
			a[j+1][0]=swap1;
			swap2=a[j][1];
			a[j][1]=a[j+1][1];
			a[j+1][1]=swap2;
		    }
		}
	}
	for(i=0;i<n;i++)
	printf("%lld  ",a[i][0]);
	for(i=0;i<n;i++)
	{
		if(s>a[i][0])
		{
			s+=a[i][1];
			flag=0;
		}
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("YES");
	else
	printf("NO");
	return 0;
}