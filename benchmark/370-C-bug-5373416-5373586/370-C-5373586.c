#include<stdio.h>
#include<stdlib.h>
typedef unsigned u;
u k[5000],l[5000],r[5000];
int F(const void*x,const void*y){return(*(u*)x>=*(u*)y)+(*(u*)x>*(u*)y)-1;}
int main(int argc, char *argv[])
{
	u i,j,m,n,s,g;
	scanf("%u%u",&n,&m);s=n;
	for(i=0;i<n;scanf("%u",k+i++));
	qsort(k,n,sizeof(u),F);
	l[0]=r[0]=k[0];
	for(i=j=g=1;i<n;i++)
	{
		if(k[i]==k[i-1])j++;
		else
		{
			if(g<j)g=j;
			j=1;
		}
		l[i]=r[i]=k[i];
	}
	if(g<j)g=j;
	for(i=0;i<n;i++)
	{
		if(l[i]==r[(i+g)%n])s--;
	}
	printf("%u\n",s);
	for(i=0;i<n;i++)printf("%u %u\n",l[i],r[(i+g)%n]);
	return 0;
}
