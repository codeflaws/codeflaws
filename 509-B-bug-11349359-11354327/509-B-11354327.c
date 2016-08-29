#include<stdio.h>
int arr[52000],i,j,n,m,max=-31231212,min=1123132;
int main(int argc, char *argv[]){
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++){
		scanf("%d",&arr[i]);
		
		if(arr[i]<min)
			min = arr[i];

		if(arr[i]>max)
			max = arr[i];

	}
	if(max - min > m){
		puts("NO");
		return 0;
	}
	puts("YES");
	for(i=1;i<=n;i++) {
		for(j=1;j<=arr[i];j++)
			printf("%d ",j<=min ? 1 : j-min);
		puts("");
	}
	
		return 0;
}
