#include<stdio.h>
int main(int argc, char *argv[])
{
	long c1,c2,c3,c4,n,m,a[1000],b[1000],i,g[1000],h[1000],s=0,t=0,f=0;
	scanf("%ld %ld %ld %ld\n",&c1,&c2,&c3,&c4);
	scanf("%ld %ld\n",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
		if(a[i]*c1<c2)
			g[i]=a[i]*c1;
		else 
			g[i]=c2;
		t=t+g[i];
	}
	if(t>c3)
		t=c3;
	for(i=0;i<m;i++)
	{
		scanf("%ld", &b[i]);
		if(b[i]*c1<c2)
			h[i]=a[i]*c1;
		else
			h[i]=c2;
		s=s+h[i];
	}
	if(s>c3)
		s=c3;
	if(s+t>c4)
	{
		s=c4;
		f=1;
	}
	if(f==0)
		printf("%ld\n",s+t);
	else 
		printf("%ld\n",s);
	return 0;
}
