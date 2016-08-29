#include<stdio.h>
//int main(int argc, char *argv[])

//int c1,c2,c3,c4,n,m,a1[2008];
/*for(i=1;i<=m;i++)
  {
  scanf("%d",&ma[i-1]);
  }*/
//COST C1

int c1,c2,c3,c4,n,m,a1[2008],b1[1004],c[1004];
void sort(int a[],int k)
{
	int t,i,j;
	for(i=0;i<k;i++)
	{
		for(j=0;j<k-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
int  calc(int a[],int k)
{
	int s,sum,i,j,min;

	for( i=0;i<k;i++)
	{
		s=0;
		for( j=0;j<=i;j++)
		{
			s=s+a[j];

		}
		sum=s*c1+(k-1-i)*c2;
		if(i==0)
			min=sum;
			else if(min>sum)
				min=sum;
		
	}
	return min;
}
int main(int argc, char *argv[])
{

	int max,o=0,i;	
	scanf("%d %d %d %d",&c1,&c2,&c3,&c4);
	scanf("%d %d",&n,&m);
	for(i=0;i<n+m;i++)
	{

		scanf("%d",&a1[i]);
		if(i<n)
			b1[i]=a1[i];

		if(i>=n)
			c[o++]=a1[i];
	}
	sort(a1,m+n);
	int max1=calc(a1,m+n);
	sort(b1,n);
	int max2=calc(b1,n)+c3;
	sort(c,m);
	int max3=calc(c,m)+c3;
	int ma=max1;
	if(max2<ma)
		ma=max2;
	if(max3<ma)
		ma=max3;
	if(c4<ma)
		ma=c4;

	printf("%d",ma);
	return 0;
}



