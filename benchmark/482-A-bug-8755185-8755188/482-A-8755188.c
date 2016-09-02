#include <stdio.h>
int main(int argc, char *argv[]){
	int n,k,i;
	scanf("%d%d",&n,&k);
	for(i=1;i<=k+1;i++)
		printf("%d ",(i%2==0)?k+2-i/2:(i+1)/2);//print 1,k+1,2,k....
	for(i=k+2;i<=n;i++)
		printf("%d ",i);
	//system("pause");
	return 0;
}
