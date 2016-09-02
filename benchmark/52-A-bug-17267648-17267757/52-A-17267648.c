#include<stdio.h>
int main(int argc, char *argv[])
{
	long long int n,i,c1=0,c2=0,c3=0,s1,s2,s3,max;
	int a;
	scanf("%lld", &n);
	for (i=0;i<n;i++)
	{
		scanf("%lld", &a);
		if (a==1) c1++;
		if (a==2) c2++;
		if (a==3) c3++;
	}
	if (c1>c2) max=c1;
	else max=c2;
	if (c3>max) max=c3;
	if (max==c1) printf("%lld", c2+c3);
	else if (max==c2) printf("%lld", c1+c3);
	else if (max==c3) printf("%lld", c2+c1);
return 0;
}