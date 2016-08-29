#include<stdio.h>
int min,max,i;
int f(u,z){
	min=u;
	max=z;
	if(z<min){
		min=z;
		max=u;
	}
	for(i=0;i<min;i++)
		if((!(max%(min-i)))&&(!(min%(min-i)))) return min-i;
}
int main(int argc, char *argv[]){
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	while(1){
			z-=f(x,z);
		if(z<=0)
			{printf("0");break;}
			z-=f(y,z);
		if(z<=0)
			{printf("1");break;}
	}
	return 0;
}
