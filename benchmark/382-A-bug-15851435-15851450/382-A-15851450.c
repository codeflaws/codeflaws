#include<stdio.h>
//256megabytes=256000000bytes
//256megabytes=256000000bytes
//因为所有字母都不相同，所以最多有26个字母加一个|
#define N 26+1
int main(int argc, char *argv[]) {
	//因为最后左右两个字符串是需要相同的所以保持两个相同是必要的！
	char left[N];
	int nleft=0;
	while(1){
		char weight=getchar();
		if(weight=='|')break;
		else {
			left[nleft]=weight;
			if(nleft==N-2){
				printf("我申请的内存不够\n");
			}
			nleft++;
		}
	}
	left[nleft]='\0';

	char right[N];
	int nright=0;
	while(1){
		char weight=getchar();
		if(weight=='\n')break;
		else {
			right[nright]=weight;
			if(nright==N-2){
				printf("我申请的内存不够\n");
			}
			nright++;
		}
	}
	right[nright]='\0';


	while(1){
		char weight=getchar();
		if(weight=='\n' || weight==EOF)break;
		else {
			if(nleft>=nright){
				right[nright]=weight;
				if(nright==N-2){
					printf("我申请的内存不够\n");
				}
				nright++;
			}else if(nleft<nright){
				left[nleft]=weight;
				if(nleft==N-2){
					printf("我申请的内存不够\n");
				}
				nleft++;
			}
		}
	}
	left[nleft]='\0';
	right[nright]='\0';
	if(nleft==nright){
		printf("%s|%s\n",left,right);
	}else{
		printf("Impossible\n");
	}
	return 0;
}
