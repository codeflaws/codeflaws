#include<stdio.h>
int main(int argc, char *argv[]){
	int x,i,j,t=0;
	scanf("%d",&x);
	for(i=1;i<=(x*2+1)/2+1;i++){
		for(j=1;j<=(x*2+1)/2+1-i;j++)
			printf(" ");
		for(j=0;j<=x-i;j++)
			printf(" ");
		printf((i!=1)?"0 ":"0");
		for(j=1;j<i;j++)
			printf("%d ",j);
		for(j=1;j<i-1;j++)
			printf("%d ",i-j-1);
		if(i!=1)
			printf("0");
		printf("\n");
	}
	for(i=1;i<=(x*2+1)/2;i++){
		for(j=0;j<i;j++)
			printf("  ");
		for(j=0;j<=x-i;j++)
			printf((j!=0)?" %d":"%d",j);
		for(j=1;j<=x-i;j++)
			printf(" %d",x-j-i);
		printf("\n");
	}
return 0;
}
