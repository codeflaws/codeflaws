#include "stdio.h"
#include "stdlib.h"

int n,t[100000];

void QSort(int l, int r)
{
	int p=l,q=r,z=t[l+rand()%(r-l+1)],temp;
	while (p<q)
	{
		while (t[p]<z) p++;
		while (z<t[q]) q--;
		if (p<=q)
		{
			temp=t[p];
			t[p++]=t[q];
			t[q--]=temp;
		}
	}
	if (l<q)
		QSort(l,q);
	if (p<r)
		QSort(p,r);
}

int main(int argc, char *argv[])
{
	int i,count=0,sum=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&t[i]);
	QSort(0,n-1);
	for (i=0;i<n;i++)
		if (sum<t[i])
		{
			count++;
			sum+=t[i];
			if (sum>1000000000)
				break;
		}
	printf("%d",count);
	return 0;
}