#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,i,cnt,maxi;
	scanf("%d",&n);
	int ara[100000];
	
	for (i=0;i<n;i++){
		scanf("%d",&ara[i]);
	}
	if (n==1){
		printf("1");
		return 0;
	}
	else if (n==2){
		printf("2");
		return 0;
	}
	cnt=2;
	maxi=0;
	for (i=2;i<n;i++){
		if (ara[i-1]+ara[i-2]==ara[i]){
			cnt++;
		}
		else{
			if (maxi<cnt){
				maxi=cnt;
			}
			cnt=0;
		}
	}
	if (maxi<cnt){
				maxi=cnt;
			}
	printf("%d",maxi);
	return 0;
}
