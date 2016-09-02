#include<stdio.h>
#include<limits.h>
#include<string.h>

int main(int argc, char *argv[])
{
	long long int p,s,q,r,n,x[10001],min=INT_MIN,max=INT_MAX,i;
	char s1[10001][100],s2[10001][100],a[100]=">=",b[100]=">",c[100]="<=",d[100]="<";

	scanf("%lld",&n);

    for(i=0;i<n;i++)
        scanf("%s %lld %s",s1[i],&x[i],s2[i]);

	for(i=0;i<n;i++)
	{
		p=strcmp(a,s1[i]);
		q=strcmp(b,s1[i]);
		r=strcmp(c,s1[i]);
		s=strcmp(d,s1[i]);

		if(p==0)
		{
			if(s2[i][0]=='N')
			{
				if(max>=x[i])
					max=x[i]-1;

			}

			else
			{
				if(min<=x[i])
					min=x[i];
			}
		}


		if(q==0)
		{
			if(s2[i][0]=='N')
			{

				if(max>=x[i])
					max=x[i];

			}

			else
			{
				if(min<=x[i])
					min=x[i]+1;
			}
		}


		if(r==0)
		{

			if(s2[i][0]=='N')
			{
				if(min<=x[i])
					min=x[i]+1;
			}

			else
			{
				if(max>=x[i])
					max=x[i];

			}
		}

		if(s==0)
		{
			if(s2[i][0]=='N')
			{
				if(min<=x[i])
					min=x[i];
			}

			else
			{
				if(max>=x[i])
					max=x[i]-1;

			}
		}

	}



	if(min>max)
		printf("Impossible");
	else
		printf("%d",min);
	return 0;
}
