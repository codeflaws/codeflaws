#include<stdio.h>
typedef long long unsigned U;
typedef unsigned u;
U M[3333][3333];
u L[3333],R[3333];
char S[5555];
int main(int argc, char *argv[])
{
	u n,i,j,k;U m,r,t;
	scanf("%s",S);
	for(*L=i=0;S[i+=2];)
	{
		if(S[i-1]=='+')L[i>>1]=i>>1;
		else L[i>>1]=L[(i-2)>>1];
	}
	for(R[i>>1]=i>>1;(i-=2)<6666;)
	{
		if(S[i+1]=='+')R[i>>1]=i>>1;
		else R[i>>1]=R[(i+2)>>1];
	}
	for(i=-2;S[i+=2];)
	{
		for(k=i-2,m=M[i>>1][(j=i)>>1]=S[i]-'0';S[j+=2];)
		{
			if(S[j-1]=='+')
			M[i>>1][j>>1]=M[i>>1][(k=j-2)>>1]+(m=S[j]-'0');
			else
			M[i>>1][j>>1]=(k<6666?M[i>>1][k>>1]:0)+(m*=S[j]-'0');
		}
	}
	n=i>>1;
	r=M[0][n-1];
	for(i=-1;++i<n;)
	{
		for(j=i;++j<n;)
		{
			if(!i||S[(i<<1)-1]=='+')
			{
				if(S[(j<<1)-1]=='+')t=(i?M[0][i-1]:0)+M[i][j-1]+M[j][n-1];
				else                t=(i?M[0][i-1]:0)+M[i][j-1]*M[j][R[j]]+M[R[j]+1][n-1];
			}
			else
			{
				if(S[(j<<1)-1]=='+')t=(L[i]?M[0][L[i]-1]:0)+(i?M[L[i]][i-1]:1)*M[i][j-1]+M[j][n-1];
				else                t=(L[i]?M[0][L[i]-1]:0)+(i?M[L[i]][i-1]:1)*M[i][j-1]*M[j][R[j]]+M[R[j]+1][n-1];
			}
			if(t>r)r=t;
		}
		if(i)
		{
			if(S[(i<<1)-1]=='+')t=M[0][i-1]+M[i][n-1];
			else t=(L[i]?M[0][L[i]-1]:0)+(i?M[L[i]][i-1]:1)*M[i][n-1];
			if(t>r)r=t;
		}
	}
	printf("%I64u\n",r);
	return 0;
}
