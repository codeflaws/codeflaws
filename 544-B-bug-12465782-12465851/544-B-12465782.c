#include<stdio.h>
int n,i,k,l,m;
void f(int a){printf("%c",(a||l>=k)?'S':'L');if(!a)l++;}
int main(int argc, char *argv[])
{
	scanf("%d%d",&n,&k);
	if((n%2 && k>(n/2)*n+n/2+1)||(n%2==0 && k>n/2*n))
	{printf("NO");return 0;}
	printf("YES\n");
	for(i=1;i<=n*n;i++)
	{
		if(i%n==1)m=1;
		if(i%(2*n)==1)m=!m;
		f(m);
		m=!m;
		if(i%n==0)puts("");
	}
	return 0;
}
