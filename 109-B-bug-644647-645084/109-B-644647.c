#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXN 100005

static int a[MAXN];
int ac;

void GenNum (int now, int len, int num)
{
	if (now == len)
	{
		a[ac] = num;
		ac++;
	}
	else
	{
		GenNum(now+1,len,num*10+4);
		GenNum(now+1,len,num*10+7);
	}
}

int main(int argc, char *argv[])
{
	a[0] = 0;
	ac = 1;
	int i;
	for (i = 1; i <= 9; i++) GenNum(0,i,0);
	a[ac] = 1000000001;
	int A, B, C, D, N;
	double res = 0.0;
	scanf("%d %d %d %d %d",&A,&B,&C,&D,&N);
	int l1, r1, l2, r2, x1, y1, x2, y2;
	for (i = 1; (i+N) < ac; i++)
	{
		l1 = a[i-1] + 1;
		r1 = a[i];
		l2 = a[i+N-1];
		r2 = a[i+N] - 1;

		if (l1 > A) x1 = l1;
		else x1 = A;
		if (r1 < B) y1 = r1;
		else y1 = B;
		if (l2 > C) x2 = l2;
		else x2 = C;
		if (r2 < D) y2 = r2;
		else y2 = D;
		if ((y1 >= x1) && (y2 >= x2)) res += (((double)(y1-x1+1) / (double)(B-A+1)) * ((double)(y2-x2+1) / (double)(D-C+1)));
				
		if (l1 > C) x1 = l1;
		else x1 = C;
		if (r1 < D) y1 = r1;
		else y1 = D;
		if (l2 > A) x2 = l2;
		else x2 = A;
		if (r2 < B) y2 = r2;
		else y2 = B;
		if ((y1 >= x1) && (y2 >= x2)) res += (((double)(y1-x1+1) / (double)(D-C+1)) * ((double)(y2-x2+1) / (double)(B-A+1)));

		if ((N == 1) && (a[i] >= A) && (a[i] <= B) && (a[i] >= C) && (a[i] <= D)) res -= ((1.0 / (double)(B-A+1)) * (1.0 / (double)(D-C+1)));
	}
	printf("%.10lf\n",res);
	return 0;
}
