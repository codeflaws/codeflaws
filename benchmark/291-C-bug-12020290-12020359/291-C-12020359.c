#include<stdio.h>
int cmpfunc (const void * a, const void * b)
{
	   return ( *(unsigned int*)a > *(unsigned int*)b ) ? 1:-1;
}
int main(int argc, char *argv[])
{
	unsigned int n,k,i,pv,c,a,b,d,s=0,j,sarr[100001],arr[100001];
	scanf("%u %u",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%u.%u.%u.%u",&a,&b,&c,&d);
		arr[i]=(a<<24) + (b<<16) + (c<<8) +d;
	}
	qsort(arr,n,sizeof(unsigned int),cmpfunc);
	for(i=31;i>0;i--)
	{
		s=s|(1<<i);
		c=1;
		for(j=0;j<n;j++)
			sarr[j]=arr[j]&s;
		for(j=1;j<n;j++)
			if(sarr[j]!=sarr[j-1])
				c++;
		if(c==k)
		{
			printf("%u.%u.%u.%u\n",s>>24,s<<8>>24,s<<16>>24,s<<24>>24);
			return 0;
		}	
	}
	printf("-1\n");
	return 0;
}
