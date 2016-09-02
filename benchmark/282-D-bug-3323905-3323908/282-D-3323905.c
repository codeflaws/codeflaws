#include<stdio.h>
#include<stdlib.h>
#define MAX 300
int win[301][301];
void solve(int a,int b){
	int i,j,k,l;
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			int mink = (i>j)?j:i;
			for(k=1;k<=mink;k++)
				if(win[i-k][j-k]==0){
					win[i][j]=1;break;}
			if(win[i][j]==0){
			for(l=1;l<=i;l++)
				if(win[i-l][j]==0){
					win[i][j]=1;break;}
					
			}
			if(win[i][j]==0){
			for(l=1;l<=j;l++)
				if(win[i][j-l]==0){
					win[i][j]=1;break;}
					
			}
		}
			
	}
}
int main(int argc, char *argv[]){
	int n,a,b,c,i,j,k;
	win[0][0]=0;
	win[1][1]=1;
	win[1][0]=1;
	win[0][1]=1;
	win[2][0]=1;
	win[0][2]=1;
	for(i=1;i<=300;i++){
		win[i][0]=1;win[0][i]=1;
	}
	solve(300,300);
	//for(i=0;i<=10;i++){
	//	for(j=0;j<=10;j++)
	//		printf("%d ",win[i][j]);
	//printf("\n");	
	//}
	scanf("%d",&n);
		if(n==1){
			scanf("%d",&a);
			if(n==0)
				printf("BitAryo");
			else
				printf("BitLGM");
		}
		else if(n==2){
			scanf("%d %d",&a,&b);
			if(win[a][b])
				printf("BitLGM");
			else
				printf("BitAryo");
		}
		else if(n==3){
			scanf("%d %d %d",&a,&b,&c);
			if((a^b^c)!=0)printf("BitLGM");
			else
				printf("BitAryo");
		}
return 0;
}
