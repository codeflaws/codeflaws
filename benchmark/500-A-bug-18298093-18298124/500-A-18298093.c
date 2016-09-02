#include<stdio.h>
int main(int argc, char *argv[]){
	long n,t;
	scanf("%ld %ld",&n,&t);
	int arr[n-1];
	int i;
	for(i=0;i<n-1;i++){
		scanf("%d",&arr[i]);
	}
	int p=0;
	int flag=0;
	if(arr[0]==t)
		flag = 1;
	for(i=0;i<n-1;){
		p =  arr[i] + i + 1;
		if(p==t){
						flag=1;
						break;
		}
			
		i = p-1;
		}
		if(flag==1)
			printf("YES");
		else
			printf("NO");
	return 0;
}