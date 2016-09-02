#include<stdio.h>
int qs(int a[],int n,int m)
{
	int i=n,j=m,k=a[i];
	if(n>=m)return 0;
	while(i<j)
	{
		while(i<j&&a[j]>k)j--;
		if(i<j)a[i++]=a[j];
		while(i<j&&a[i]<k)i++;
		if(i<j)a[j--]=a[i];
	}
	a[i]=k;
	qs(a,n,i-1);
	qs(a,i+1,m);
	return 0;
}
int main(int argc, char *argv[])
{
	int n,m,k,i,j,a[52]={0},flag=0;
	scanf("%d %d %d",&n,&m,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	qs(a,1,n);
	for(i=0;i<=n;i++)
	{
		k+=a[n-i+1]-1;
		if(k>=m)
		{
			printf("%d",i);
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("-1");
	return 0;
}