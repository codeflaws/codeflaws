#include<stdio.h>
typedef long long unsigned U;
typedef unsigned u;
u A[1111111],P[1111],Pi;
void G(u n)
{
	u i;
	for(i=-1;++i<Pi;)if(P[i]==n)return;
	P[Pi++]=n;
	return;
}
void F(u n)
{
	u i;
	for(i=2;i*i<=n;++i)if(n%i==0)
	for(G(i);(n/=i)%i==0;);
	if(n>1)G(n);
	return;
}
u L[1111111],R[1111111],Li,Ri;
int main(int argc, char *argv[])
{
	u n,a,b,i,j,k,l,r;U ans=0,tmp,min,Z;--ans;
	scanf("%u%u%u",&n,&a,&b);
	for(i=-1;++i<n;scanf("%u",A+i));
	F(A[0]-1);F(A[n-1]-1);
	F(A[0]  );F(A[n-1]  );
	F(A[0]+1);F(A[n-1]+1);
	while(Pi--)
	{
		k=P[Pi];Li=Ri=0;
		for(l=-1;++l<n;)if(A[l]%k)
		{
			if((A[l]-1)%k&&(A[l]+1)%k)break;
			L[Li++]=l;
		}
		if(l==n)
		{
			if(!Li){ans=0;break;}
			min=Li*(U)b;
			if(b>a)min-=b-a;
			tmp=min;
			for(i=j=0;++i<Li;)
			{
				if((tmp+=(L[i]-L[i-1])*(U)a-b)>min)tmp=min;
				if(ans>tmp)ans=tmp;
			}
			if(ans>min)ans=min;
			continue;
		}
		for(r=n;r--;)if(A[r]%k)
		{
			if((A[r]-1)%k&&(A[r]+1)%k)break;
			R[Ri++]=r;
		}
		tmp=min=(Li+Ri)*(U)b+(r-l+1)*(U)a;
		for(i=Ri;i--;)
		if(min>(Z=tmp+(R[i]-r)*(U)a-(Ri-i)*(U)b))min=Z;
		tmp=min;
		for(i=Li;i--;)
		if(min>(Z=tmp+(l-L[i])*(U)a-(Li-i)*(U)b))min=Z;
		if(ans>min)ans=min;
	}
	printf("%I64u\n",ans);
	return 0;
}
