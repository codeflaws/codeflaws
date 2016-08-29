#include<stdio.h>
int compare(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int main(int argc, char *argv[])
{
    long long a[26],ans=0,c=0;
    int n,i; scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%lld",&a[i]);
    qsort(a,n,sizeof(a[0]),compare);
    for(i=n-1;i>0;i--)
	{
		if(a[i]==a[i-1]) a[i-1]=a[i]?a[i]-1:0;
		ans+=a[i];
	}
	ans+=a[0];
	printf("%lld\n",ans);
	return 0;
}
