#include <stdio.h>
int n,x,ts,i,j,x1,y10,k,m,flag=0,flag2=0,z,B[10][200];
char a,A[10][200];
void f(int x1,int y1)
{
	if (flag==1)
		return;
	if (B[x1][y1]==1)
		return;
	B[x1][y1]=1;		
	if (y1>=x && x1<=3 && x1>0)
	{
		flag=1;
		return ;
	}
	if (x1>3 || x1<1)
		return;
		
	if (A[x1][y1]!='.')
		return;
	if (A[x1][y1+1]!='A' && A[x1-1][y1+1]!='A' && A[x1-1][y1+2]!='A' && A[x1-1][y1+3]!='A')
		f(x1-1,y1+3);
	if (A[x1][y1+1]!='A' &&  A[x1+1][y1+1]!='A' && A[x1+1][y1+2]!='A' && A[x1+1][y1+3]!='A')
		f(x1+1,y1+3);
	if (A[x1][y1+1]!='A' && A[x1][y1+2]!='A' && A[x1][y1+3]!='A')
		f(x1,y1+3);
}
int main(int argc, char *argv[])
{
	scanf("%d",&n);
	for (z = 1; z<=n ; z++)
	{
		scanf("%d %d",&x,&ts);
		for (i = 1; i <=3 ; i++)
		{
			for (j = 1; j<=x ; j++)
			{
				scanf(" %c",&A[i][j]);
				if (A[i][j]!='.' && A[i][j]!='s')
				{
					A[i][j]='A';
				}
				if (A[i][j]=='s')
				{
					k=i;
					m=j;
					A[i][j]='.';
				}
			}
		}
		f(k,m);
		if (flag==0)
		{
			printf("\nNO");
		}
		else
		{
			printf("\nYES");
		}
		flag=0;
		for (i = 1; i <=3 ; i++)
		{
			for (j = 1; j <=x ; j++)
			{
				B[i][j]=0;
				A[i][j]='.';
			}
		}
	}
	return 0;
}
