#include<stdio.h>
#include<stdlib.h>
//有一个更好的想法就是
//1010101011 11
char *card;
int zero,one;
void print(){
	int i;
	for(i=0;i<one+zero;i++){
		printf("%d",card[i]);
	}
	printf("\n");
}

int main(int argc, char *argv[]) {
	scanf("%d%d",&zero,&one);
	int i;
	if(one>(zero+1)*2){
		printf("-1\n");
	}else if(zero>one+1){
		printf("-1\n");
	}else{
		card=(char *)malloc((zero+one)*sizeof(char));
		if(card==NULL){
			printf("未分配成功\n");
			return 1;
		}
		if(zero==one+1){
			//0101010
			for(i=0;i<one+zero;i++){
				if(i%2==0){
					card[i]=0;
				}else{
					card[i]=1;
				}
			}
		}else{
			//不用平移
			//one-zero-2个110110
			int part1=one-zero-2;
			//zero-(one-zero-2)个10
			//最后两个是11
			for(i=0;i<3*part1;i++){
				if(i%3==2)card[i]=0;
				else card[i]=1;
			}
			//print();
			int part2=zero-(one-zero-2);
			int option=1;
			for(i=3*part1;i<3*part1+2*part2;i++){
				card[i]=option;
				if(option==1)option=0;
				else option=1;
			}
			card[zero+one-1]=1;
			card[zero+one-2]=1;
		}
		print();
	}

	return 0;
}
