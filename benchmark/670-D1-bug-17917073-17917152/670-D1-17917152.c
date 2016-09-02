#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int n,k;
	int i=0;
	int* need;
	int* has;
	int* count;
	int* reserve;
	int min,minidx;
	int flag=0;
	scanf("%d %d",&n,&k);
	need=(int*) malloc(sizeof(int)*n);
	has=(int*) malloc(sizeof(int)*n);
	count=(int*) malloc(sizeof(int)*n);
	reserve=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&need[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&has[i]);
		count[i]=has[i]/need[i];
		reserve[i]=has[i]%need[i];
	}
	while(1){
		min=2001;
		for(i=0;i<n;i++){
			if(min>count[i]){
				min=count[i];
				minidx=i;
			}
		}
		if(flag==1){
			break;
		}
		if(k>=need[minidx]-reserve[minidx]){
			k=k-(need[minidx]-reserve[minidx]);
			count[minidx]++;
			reserve[minidx]=0;
		}else {
		 	flag=1;
		}	
	}
	printf("%d",min);
	return 0;
}
