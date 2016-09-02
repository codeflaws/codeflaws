#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	int m;
	int s;
	int nine;
	int ext;
	int i;
	int arrMin[100]={1};
	int minSum=1;
	int remainder;
	int nineMin;
	scanf("%d",&m);
	scanf("%d",&s);
	//foul
	nine=s/9;
	if(nine>m || m==0 || (s==0 && m!=1)){
		printf("-1\n");
		printf("-1\n");
		return 0;
	}
	//min
	
	nineMin=(s-1)/9;
	if(nineMin==m-1)
		remainder=s-nineMin*9;
	else
		remainder=s-nineMin*9-1;
	if(nineMin==m-1){
		printf("%d",remainder);
		for(i=1;i<=m-1;i++){
			printf("9");
		}
		printf("\n");
	}
	else{
		printf("1");
		for(i=1;i<=m-2-nineMin;i++){
			printf("0");
		}
		printf("%d",remainder);
		for(i=1;i<=nineMin;i++){
			printf("9");
		}
		printf("\n");
	}
	
	//max
	ext=s-nine*9;
	for(i=1;i<=nine;i++){
		printf("9");
	}
	if(m-nine!=0)
		printf("%d",ext);
	for(i=1;i<=m-nine-1;i++){
		printf("0");
	}
}