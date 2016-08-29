#include<stdio.h>
#include<math.h>

long long int fun(long long int n)
{
	long long int p=1,k,dig=0,z,i,a,new=0;

	z=n;

	while(z>0)
	{
		dig++;
		z=z/10;
	}

	z=n;

	for(i=dig-1;i>=0;i--)
	{
		for(k=1;k<=i;k++)
			p=p*10;

		a=z/p;
		if(a!=0)
		new=new*10+a;

		z=z-a*p;
		p=1;

	}

	return new;
}

int main(int argc, char *argv[])
{
	long long int a1,b1,c1,a2,b2,c2;

	scanf("%lld%lld",&a1,&b1);

	c1=a1+b1;

	a2=fun(a1);
	b2=fun(b1);
	c2=fun(c1);
	printf("%lld %lld %lld",a2,b2,c2);

	if(a2+b2==c2)
		printf("YES");
	else
		printf("NO");

	return 0;
}
