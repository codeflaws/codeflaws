#include<stdio.h>
int main(int argc, char *argv[]){
	int a,b,c=0;
	scanf("%d%d",&a,&b);
	if(a<3&&b<3) {printf("0"); return 1;}
	for(;a>0&&b>0;c++){
		if(a>b) a-=2,b++;
		else a++,b-=2;
	}
	printf("%d",c);
	return 0;
}
