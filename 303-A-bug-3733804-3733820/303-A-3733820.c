int n;

int main(int argc, char *argv[])
{
	int i,j,e;
	while(~scanf("%d",&n))
	{
		if(n%2==0)
		{
			puts("-1");
			continue;
		}
		printf("0");
		for(i=1;i<n;i++) printf(" %d",i); puts("");
		printf("0");
		for(i=1;i<n;i++) printf(" %d",i); puts("");
		printf("0");
		for(i=1;i<n;i++) printf(" %d",i*2%n); puts("");
	}
return 0;
}
