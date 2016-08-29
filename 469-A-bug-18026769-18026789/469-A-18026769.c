#include<stdio.h>
#include<string.h>
int b[101];
int main(int argc, char *argv[])
{          memset(b,0,sizeof(b));
	int i,n,p,q,a[1001],flag=0;

	scanf("%d",&n);

	scanf("%d",&p);
	for(i=0;i<p;i++)
		scanf("%d",&a[i]);

	scanf("%d",&q);
	for(i=p;i<p+q;i++)
		scanf("%d",&a[i]);

	for(i=0;i<p+q;i++)
		b[a[i]]++;

	for(i=1;i<=n;i++)
	{
		if(b[i]==0)
		{
			flag=1;
			printf("%d",i);
			break;

		}
	}

	if(flag==1)
		printf("Oh, my keyboard!");
	else
		printf("I become the guy.");


	return 0;
}
