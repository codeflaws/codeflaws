#include<stdio.h>
typedef long long unsigned U;
typedef long long L;
typedef unsigned u;
int A[222222],D[222222];
u B[222222],Bi;
int main(int argc, char *argv[])
{
	u n,x,l,i=-1,j,w=0;U r=0;
	for(scanf("%u%u",&n,&l);++i<=n;D[i]=A[i])scanf("%d",A+i);
	x=n+100;digi:;
	for(i=-1;++i<=x;)
	{
		if(D[i]<0)D[i+1]-=(-D[i]+1)/2;
		else D[i+1]+=D[i]/2;
		D[i]&=1;
	}
	if(D[x])
	{
		for(i=-1;++i<=x;)D[i]=A[i]=-A[i];
		goto digi;
	}
	for(i=0-1;!D[++i];);
	for(j=x+1;!D[--j];);
	if(j-i+1>60){printf("0\n");return 0;}
	for(;j+1>=i+1;--j)r=2*r+D[j];
	for(++i;i--&&(r>>60)==0;r<<=1)
	{
		if(i==n&&(L)(r)==(L)(A[i]))continue;
		if((L)(r)<=(L)(A[i]+l)&&i<=n)++w;
	}
	printf("%u\n",w);
	return 0;
}
