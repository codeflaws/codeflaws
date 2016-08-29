#include<stdio.h>


int main(int argc, char *argv[]){
	int count=0,max=1,i;
	char t,p;
	p=getchar();
	for (i=0;(t=getchar())!=10;i++){
		if (p==t) {
			max++;
		}
		else {
			if (max%2==0) count++;
			max=1;
		}
		p=t;
	}
	if (max%2==0) count++;
	printf("%d\n",count);
	return 0;
}
