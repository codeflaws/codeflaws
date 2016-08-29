#include<stdio.h>
#include<math.h>
#define m 1000000007u
typedef unsigned u;
typedef double d;
d Lg[16],Lv[2222][2222],Uv[2222][2222];u w;
u L[2222][2222],R[2222][2222],U[2222][2222],D[2222][2222];
d F(char(*X)[2222],u n,u diag,u ppp)
{
	u i,j,k,l,x,y,z;d r=-1.0,v;x=y=z=-1;
	for(i=0;++i<=n;R[i][n+1]=D[n+1][i]=n+1)for(j=0;++j<=n;)
	{
		Lv[i][j]=Lv[i][j-1]+Lg[X[i][j]&15];
		Uv[i][j]=Uv[i-1][j]+Lg[X[i][j]&15];
		if(X[i][j]=='0')
		{
			L[i][j]=j;
			U[i][j]=i;
		}
		else
		{
			L[i][j]=L[i][j-1];
			U[i][j]=U[i-1][j];
		}
	}
	for(i=n+1;--i;)for(j=n+1;--j;)
	{
		if(X[i][j]=='0')
		{
			R[i][j]=j;
			D[i][j]=i;
		}
		else
		{
			R[i][j]=R[i][j+1];
			D[i][j]=D[i+1][j];
		}
	}
	for(i=0;++i<=n;)for(j=0;++j<=n;)if(X[i][j]!='0'&&(!diag||(((i^j^ppp)&1))))
	{
		l=-1;
		if(l>(k=i-U[i][j]))l=k;
		if(l>(k=D[i][j]-i))l=k;
		if(l>(k=j-L[i][j]))l=k;
		if(l>(k=R[i][j]-j))l=k;
		v=Uv[i+l-1][j]-Uv[i-l][j]+Lv[i][j+l-1]-Lv[i][j-l]-Lg[X[i][j]&15];
		if(r<v){r=v;x=i;y=j;z=l;}
	}
	if(r>-0.5&&x!=-1u&&y!=-1u&&z!=-1u)
	{
		w=X[x][y]&15;
		for(i=0;++i<z;)
		{
			w=w*(X[x+i][y]&15)%m;
			w=w*(X[x][y+i]&15)%m;
			w=w*(X[x-i][y]&15)%m;
			w=w*(X[x][y-i]&15)%m;
		}
	}
	else{r=0.0;w=0;}
	return r;
}
char A[2222][2222],B[2222][2222];
int main(int argc, char *argv[])
{
	u n,l,i=1,j,s=0,o=1;d r=-1.0,v;
	scanf("%u",&n);
	for(l=(n<<1)-1;++i<16;)Lg[i]=log((d)i);
	for(i=0;++i<=l;)for(j=0;++j<=l;)B[i][j]='0';
	for(i=0;++i<=n;)scanf("%s",A[i]+1);
	for(i=0;++i<=n;)for(j=0;++j<=n;)
	{
		if((B[n+i-j][i+j-1]=A[i][j])!='0')o=0;
		if(i!=n&&j!=n)B[n+i-j][i+j]='1';
	}
	for(i=0;++i<=l;)printf("%s\n",B[i]+1);
	if(o){printf("0\n");return 0;}
	if(r<(v=F(A,n,0,0))){r=v;s=w;}
	if(r<(v=F(B,l,1,n))){r=v;s=w;}
	printf("%u\n",s);
	return 0;
}
