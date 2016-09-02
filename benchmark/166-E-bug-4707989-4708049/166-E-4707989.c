#include <stdio.h>

#define MOD	1000000007

typedef struct
{
	int data[4][4];
} Matrix_t;

Matrix_t Matrix_Mul(Matrix_t a,Matrix_t b)
{
	Matrix_t res;
	int i,j,k;
	for(i=0;i<4;++i)
	{
		for(j=0;j<4;++j)
		{
			for(res.data[i][j]=0,k=0;k<4;++k)
			{
				res.data[i][j]+=(a.data[i][k]*b.data[k][j])%MOD;
				res.data[i][j]%=MOD;
			}
		}
	}
	return res;
}

int ModExp(Matrix_t a,int n)
{
	int i,j;
	Matrix_t ans;
	for(i=0;i<4;++i)
	{
		for(j=0;j<4;++j)
		{
			ans.data[i][j]=i==j?1:0;
		}
	}
	while(n)
	{
		if(n&1)
		{
			ans=Matrix_Mul(a,ans);
		}
		a=Matrix_Mul(a,a);
		n>>=1;
	}
	return ans.data[3][3];
}

int main(int argc, char *argv[])
{
	int i,j,N;
	Matrix_t A;
	for(i=0;i<4;++i)
	{
		for(j=0;j<4;++j)
		{
			A.data[i][j]=i==j?0:1;
		}
	}
	scanf("%d",&N);
	printf("%d\n",ModExp(A,N));
	return 0;
}