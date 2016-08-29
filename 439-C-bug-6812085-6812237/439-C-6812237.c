#include<stdio.h>
typedef unsigned u;
u O[100100],E[100100],o,e;
int main(int argc, char *argv[])
{
	u n,p,i,j,k;
	scanf("%u%u%u",&n,&k,&p);p=k-p;
	for(i=0;i<n;i++)
	{
		scanf("%u",&j);
		if(j&1)O[o++]=j;
		else E[e++]=j;
	}
	if(o<p||((o-p)&1)||p+e+((o-p)>>1)<k||e+((o-p)>>1)<k-p)
	{printf("NO\n");return 0;}
	printf("YES\n");
	if(p)for(k-=(j=p);--j;)printf("1 %u\n",O[--o]);
	if(k)
	{
		if(p)printf("1 %u\n",O[--o]);
		while(--k)
		{
			if(o)
			{
				printf("2 %u",O[--o]);
				printf(" %u\n",O[--o]);
			}
			else
			{
				printf("1 %u\n",E[--e]);
			}
		}
	}
	printf("%u",o+e);
	while(o)printf(" %u",O[--o]);
	while(e)printf(" %u",E[--e]);
	putchar('\n');
	return 0;
}
