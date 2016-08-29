#include<stdio.h>
int main(int argc, char *argv[]){
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++)
			if(i==j)printf("%d ",m);
			else printf("0 ");
		puts("");
	}

	return 0;
}
