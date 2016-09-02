#include<stdio.h>
#include<stdlib.h>
typedef long long unsigned U;
typedef unsigned u;
u min(u a,u b){return a>b?b:a;}
u max(u a,u b){return a>b?a:b;}
u X[222222],P[222222],N[222222],A[222222],B[222222],Q[222222],Ql,Qr;
void del(u x)
{
	if(Ql!=Qr&&Q[Ql]==x)++Ql;
	return;
}
void ins(u x)
{
	while(Qr!=Ql&&Q[Qr-1]>x)--Qr;
	Q[Qr++]=x;return;
}
int F(const void*x,const void*y){return X[*(u*)x]-X[*(u*)y];}
int main(int argc, char *argv[])
{
	u i=-1,j,k,f,p,x,t,n;U r=0;
	for(scanf("%u%u%u",&x,&t,&n);++i<n;N[i]=i)scanf("%u%u",X+i,P+i);
	qsort(N,n,sizeof(u),F);
	for(i=-1;++i<n;B[i]=P[N[i]])A[i]=X[N[i]];
	for(i=-1;++i<n;P[i]=B[i])X[i]=A[i];
	X[n]=x;P[n]=0;f=t-*X;p=*X;j=0;
	for(i=0;++i<=n;)if(X[i]-X[i-1]>t){printf("-1\n");return 0;}
	for(i=-1;++i<=n&&X[i]<=t;)ins(P[i]);
	while(p+f<x)
	{
		if(f==t)
		{
			del(P[j++]);
			f-=(p=X[j])-X[j-1];
		}
		k=min(t-f,X[i]-p-f);
		f+=k;r+=k*(U)Q[Ql];
		while(p+f>=X[i])ins(P[i++]);
	}
	printf("%llu\n",r);
	return 0;
}
