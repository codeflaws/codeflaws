#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,A[91],i,flag=0;
	scanf("%d",&n);
	A[0]=0;
	for(i=1;i<=n;i++){
		scanf("%d",&A[i]);
	}
	if(A[1]>15){
		printf("15\n");
	} else {
		for(i=1;i<n;i++){
			if((A[i+1]-A[i])>15){
				flag = 1;
				printf("%d\n",A[i]+15);
			}
		}
		if(flag == 0){
			flag = (90>(A[n]+15))?(A[n]+15):90;
			printf("%d\n",flag);
		}
	}
	return 0;
}