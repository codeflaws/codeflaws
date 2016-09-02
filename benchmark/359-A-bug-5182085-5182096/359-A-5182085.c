#include<stdio.h>
#define N 60
int map[N][N];
int main(int argc, char *argv[]) {
	int n,m,i,j,flag;
	while(scanf("%d%d",&n,&m)!=EOF) {
		flag=0;
		for(i=1;i<=n;i++)
			for(j=1;j<=m;j++) {
				scanf("%d",&map[i][j]);
				if(map[i][j]&&(i==1||j==1||i==n||j==n))
					flag=1;
			}
			if(flag)
				printf("2\n");
			else
				printf("4\n");
	}
	return 0;
}
