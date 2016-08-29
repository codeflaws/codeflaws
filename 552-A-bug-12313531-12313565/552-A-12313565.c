#include<stdio.h>
int main(int argc, char *argv[]){
	int i,j,k;
	int array[102][102]={0};
	int x,y,a,b,n;
	int max_x,max_y;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d%d",&x,&y,&a,&b);
		if(a>max_x){
			max_x=a;
		}
		if(b>max_y){
				max_y=b;
		}
	for(j=x;j<=a;j++){
		for(k=y;k<=b;k++){
			array[j][k]+=1;
			}
		}
	}
	int count;
	for(i=1;i<=max_x;i++){
		for(j=1;j<=max_y;j++){
				count+=array[i][j];
		}
	}

	printf("%d\n",count);
	
	return 0;
}
