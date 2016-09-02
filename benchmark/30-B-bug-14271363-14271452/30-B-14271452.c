#include <stdio.h>

int a[2][3];

int f,l[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int check(int d,int m,int y) {
	if (a[1][m]>12) return 0;
	if (a[1][d]>l[a[1][m]]+!(a[1][y]%4)) return 0;
	if (f<366*a[1][y]+31*a[1][m]+a[1][d]) return 0;
	return 1;
}

int main(int argc, char *argv[]) {
	int i,j,k;
	for (i=0;i<2;i++)
		scanf("%d.%d.%d",&a[i][0],&a[i][1],&a[i][2]);
	int y=0;
	if (a[0][2]>18) {
		f=366*(a[0][2]-18)+31*a[0][1]+a[0][0];
		for (i=0;i<3;i++)
			for (j=0;j<3;j++)
				if (i!=j)
					for (k=0;k<3;k++)
						if (k!=i&&k!=j)
							if (check(i,j,k)) y=1;
	}
	printf("%s\n",y?"YES":"NO");
	return 0;
}
