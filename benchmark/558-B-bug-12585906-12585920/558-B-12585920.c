#include "stdio.h"
#define MAX 1000001

int main(int argc, char *argv[])
{
	int n,a[MAX]={0},l[MAX]={0},r[MAX]={0},i,x;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&x);
		if (a[x]==0)
			l[x]=i;
		a[x]++;
		r[x]=i;

	}
	int max=0;
	for (i=1;i<MAX;i++)
		if ((a[max]<a[i])||((a[max]==a[i])&&((r[i]-l[i])<(r[max]-l[max]))))
			max=i;
	printf("%d %d\n",l[max]+1,r[max]+1);
	return 0;
}