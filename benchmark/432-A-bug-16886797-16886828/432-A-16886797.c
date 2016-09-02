#include<stdio.h>
int main(int argc, char *argv[]){
	int x,y,i,z,s=0;
	scanf("%d %d",&x,&y);
	for(i=0;i<x;i++)
		scanf("%d",&z);
		if(z<=5-y)
			s++;
	 printf("%d",s/3);
return 0;
}
