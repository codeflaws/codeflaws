#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXM 100005

int main(int argc, char *argv[])
{
	static char data[MAXM];
	scanf("%s",data);
	int N;
	N = strlen(data);
	int a[10];
	memset(a,0,sizeof(a));
	int i;
	for (i = 0; i < N; i++)
	{
		a[(int)(data[i] - '0')]++;
	}
	int A[10];
	int B[10];
	int z, k, j;
	int res = a[0];
	int resz = a[0];
	int resvar = -1;
	int temp;
	for (z = 0; z <= a[0]; z++)
	{
		memcpy(A,a,sizeof(a));
		memcpy(B,a,sizeof(a));
		A[0] -= z;
		B[0] -= z;
		for (k = 1; k <= 5; k++)
		{
			if ((A[k]) && (B[10-k]))
			{
				A[k]--;
				B[10-k]--;
				temp = z + 1;
				for (i = 0; i <= 9; i++)
				{
					if (A[i] < B[9-i]) temp += A[i];
					else temp += B[9-i];
				}
				if (temp > res)
				{
					res = temp;
					resz = z;
					resvar = k;
				}
				A[k]++;
				B[10-k]++;
			}
		}
	}
	static char resa[MAXM];
	static char resb[MAXM];
	resa[N] = 0;
	resb[N] = 0;
	int pos = N - 1;
	memcpy(A,a,sizeof(a));
	memcpy(B,a,sizeof(a));
	for (i = 0; i < resz; i++)
	{
		resa[pos] = '0';
		resb[pos] = '0';
		pos--;
		A[0]--;
		B[0]--;
	}
	if (resvar != -1)
	{
		resa[pos] = (char)(resvar) + '0';
		resb[pos] = (char)(10-resvar) + '0';
		pos--;
		A[resvar]--;
		B[10-resvar]--;
		for (i = 0; i <= 9; i++)
		{
			while ((A[i]) && (B[9-i]))
			{
				resa[pos] = (char)(i) + '0';
				resb[pos] = (char)(9-i) + '0';
				pos--;
				A[i]--;
				B[9-i]--;
			}
		}
	}
	i = 0; j = 0;
	while (pos >= 0)
	{
		while (A[i] == 0) i++;
		while (B[j] == 0) j++;
		resa[pos] = (char)(i) + '0';
		resb[pos] = (char)(j) + '0';
		pos--;
		A[i]--;
		B[j]--;
	}
	printf("%s\n%s\n",resa,resb);
	return 0;
}
