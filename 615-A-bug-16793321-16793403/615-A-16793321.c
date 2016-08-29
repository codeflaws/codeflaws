#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define SORT int t=y;while(t--){for(i=0;i<x-1;i++)if(arr[i]>arr[i+1]){o=arr[i];arr[i]=arr[i+1];arr[i+1]=o;}}
#define R return 0;
#define and &&
#define or ||
int main(int argc, char *argv[]){
	int arr[105][105],s[105]={0},x,y,i,j,t;
	scanf("%d %d",&x,&y);
	for(i=0;i<x;i++){
		scanf("%d",&t);
		for(j=0;j<t;j++){
			scanf("%d",&arr[j][i]);
			s[arr[j][i]-1]++;
		}
	}
	for(i=0;i<x;i++){
		if(!s[i]){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}
