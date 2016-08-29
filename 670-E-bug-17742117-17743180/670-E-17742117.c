#include<stdio.h>
typedef unsigned u;
char S[555555];
u Nx[555555],Pv[555555];
int main(int argc, char *argv[])
{
	u i,k,n,q,p,l,r;char c;
	for(i=-1;++i<555555;Pv[i]=i-1)Nx[i]=i+1;
	scanf("%u%u%u%s",&n,&q,&p,S+1);
	while(q--)
	{
		while((c=getchar())<'A');
		if(c=='R')p=Nx[p];
		if(c=='L')p=Pv[p];
		if(c=='D')
		{
			if(S[l=p]=='(')
			{
				for(k=1;k;k+=(S[p]=='(')-(S[p]==')'))p=Nx[p];
				r=p;
			}
			else if(S[r=p]==')')
			{
				for(k=1;k;k+=(S[p]==')')-(S[p]=='('))p=Pv[p];
				l=p;
			}
			Nx[Pv[l]]=Nx[r];
			Pv[Nx[r]]=Pv[l];
			while((p=Nx[r])>n)p=Pv[p];
		}
	}
	for(i=0;(i=Nx[i])<=n;)putchar(S[i]);putchar('\n');
	return 0;
}
