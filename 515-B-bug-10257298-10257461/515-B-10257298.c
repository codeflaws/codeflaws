#include<stdio.h>
int i=0,max=0,g,girl[1000],boy[1000],b,a,n,m,s;
int maxy(int hallo,int kallo){
	return (hallo>kallo) ? hallo : kallo; 
}
int main(int argc, char *argv[]) {
	scanf("%d %d",&n,&m);
	max=maxy(n,m);
	scanf("%d",&b);
	for(a=0;a<b;a++){
		scanf("%d",&s);
		boy[s]=1;
	}
	scanf("%d",&g);
	for(a=0;a<g;a++){
		scanf("%d",&s);
		girl[s]=1;
	}
	for(i=0;i<m+n;i++){
		//printf("%d %d : %d %d\n",i%n,i%m,boy[i%n],girl[i%m]);
		if(boy[i%n]==1||girl[i%m]==1){
			boy[i%n]=1;
			girl[i%m]=1;
		}
	}
	for(a=0;a<n;a++){
		if(boy[a]!=1){
			printf("No\n");
			return 0;
		}
		//printf("%d ",boy[a]);
	}
	for(a=0;a<m;a++){
		if(girl[a]!=1){
			printf("No\n");
			return 0;
		}
		//printf("%d ",girl[a]);
	}
	printf("Yes\n");
	scanf(" ");
	return 0;
}
