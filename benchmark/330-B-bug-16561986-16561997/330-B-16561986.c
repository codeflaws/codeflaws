//我想到的办法是直接构建出来
//就是拿出一个点作为公共点！
#include<stdio.h>
#define MAX 1000
int main(int argc, char *argv[]) {
	int n,m;
	scanf("%d%d",&n,&m);
	int map[MAX][MAX];
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			map[i][j]=-1;
		}
	}
	for(i=0;i<m;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		a--,b--;
		map[a][b]=0;
		map[b][a]=0;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf(" %d",map[i][j]);
		}
		printf("\n");
	}

	//怎样的点适合作为中心点？
	int center=-1;
	for(i=0;i<n;i++){
		int can=1;
		for(j=0;j<n;j++){
			if(map[i][j]!=-1){
				can=0;
				break;
			}
		}
		if(can){
			//i可以作为中心点！
			center=i;
			break;
		}
	}
	if(center==-1){
		printf("我们没有找到中心点，出了一点问题！\n");
		return 1;
	}
	//中心点和所有其他点相连！
	printf("%d\n",n-1);//至少需要n-1个路
	for(i=0;i<n;i++){
		if(i!=center) printf("%d %d\n",i+1,center+1);
	}

	return 0;
}
