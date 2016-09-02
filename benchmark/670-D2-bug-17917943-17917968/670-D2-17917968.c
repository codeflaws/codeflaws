#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	long long n,k;
	long long i=0;
	long long* need;
	long long* has;
	long long* count;
	long long* reserve;
	long long min,start,end;
	long long j;
	int flag=0;
	scanf("%I64d %I64d",&n,&k);
	need=(long long*) malloc(sizeof(long long)*n);
	has=(long long*) malloc(sizeof(long long)*n);
	for(i=0;i<n;i++){
		scanf("%I64d",&need[i]);
	}
	for(i=0;i<n;i++){
		scanf("%I64d",&has[i]);
	}
	start=0;
	end=2000000009;
	while(start<end){
		min=(start+end+2)/2;
		j=0;
		for(i=0;i<n;i++){
			if(min*need[i]>has[i]){
				j+=(min*need[i])-has[i];
			}
			if(j>k){
				break;
			}
		}
		if(j>k){
			end=min-1;
		}else{
			start=min;
		}
	}
	printf("%I64d",start);
	return 0;
}
