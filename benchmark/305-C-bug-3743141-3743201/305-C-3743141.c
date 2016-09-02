long long n,a[100000];

int main(int argc, char *argv[])
{
	long long i,j,k,l,h,mid;
	printf("%x\n",100000);
	while(~scanf("%I64d",&n))
	{
		for(i=0;i<n;i++) scanf("%I64d",&a[i]);
		for(i=0;i<n-1;i++)
		{
			if(a[i]==a[i+1])
			{
				a[i]=-1;
				a[i+1]++;
				for(l=i+1,h=n-1;l<h;)
				{
					mid=(l+h+1)/2;
					if(a[mid]==a[i+1]-1) l=mid;
					else h=mid-1;
				}
				k=a[i+1];
				a[i+1]=a[l];
				a[l]=k;
			}
		}
		for(i=j=0;i<n;i++) if(a[i]!=-1) j++;
		printf("%I64d\n",a[n-1]+1-j);
	}
	return 0;
}
