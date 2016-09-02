#include <inttypes.h>
#include <inttypes.h>
#include <stdio.h>
int64_t a[100],n,p,q,temp,d;
int64_t gcd(int64_t a,int64_t b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main(int argc, char *argv[])
{
	int i;
	scanf("%I64d%I64d",&p,&q);
	scanf("%I64d",&n);
	for(i=1;i<=n;i++)
		scanf("%I64d",&a[i]);
	d=gcd(p,q);
	p/=d;
	q/=d;
	if(n==1)
	{
		if(p/q==a[1])
			printf("YES\n");
		else
			printf("NO\n");
		return 0;
	}
	for(i=1;i<n;i++)
	{
		p=p-a[i]*q;
		d=gcd(p,q);
		p/=d;
		q/=d;
		temp=p;
		p=q;
		q=temp;
	}
	if(q==0)
		printf("NO\n");
	else if(p/q==a[n])
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}


