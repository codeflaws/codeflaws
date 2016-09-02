//实现一个简单的统计就可以！
#include<stdio.h>
#define N 200+1
int abs(int a){
	if(a<0)return -a;
	else return a;
}
int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	int i;
	char hamsters[N];
	scanf("%s",hamsters);
	int standing=0;
	int sitting=0;
	for(i=0;i<n;i++){
		char position=hamsters[i];
		if(position=='X'){
			standing++;
		}else if(position=='x'){
			sitting++;
		}
	}
	//printf("x:%d X:%d\n",sitting,standing);
	int require;
	int more=0;
	if(abs(standing-n/2)>abs(sitting-n/2)){
		require=abs(sitting-n/2);
	}else if(abs(standing-n/2)==abs(sitting-n/2)){
		if(standing<sitting){
			//x to X
			more=1;
		}else{
			//X to x
			more=0;
		}
		require=abs(standing-n/2);
	}else{
		require=abs(standing-n/2);
		more=1;
	}
	/*
	if(more==0){
		printf("我们要把X变为x\n");
	}else{
		printf("我们要把x变为X\n");
	}
	*/
	//printf("%d %d\n",require,more);
	//printf("%d\n",require);
	for(i=0;i<n;i++){
		if(more==0 && hamsters[i]=='X' && require>0){
			printf("x");
			require--;
		}else if(more==1 && hamsters[i]=='x' && require>0){
			printf("X");
			require--;
		}else{
			printf("%c",hamsters[i]);
		}
	}
	printf("\n");
	return 0;
}
