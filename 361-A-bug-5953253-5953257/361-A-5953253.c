#include<stdio.h>
int main(int argc, char *argv[]){
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	for(i=0;i<n&&puts("");i++)
		for(j=0;j<n;j++)
			if(i==j)printf("%d ",m);
			else printf("0 ");

	return 0;
}
