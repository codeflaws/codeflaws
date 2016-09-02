#include <stdio.h>
#include <math.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int n,i;
	int ara[100000];
	scanf("%d",&n);
	if (n%2==1){
        printf("-1");
	}
	else{
        for (i=1;i<=n;i+=2){
            ara[i]=i+1;
            ara[i+1]=i;
        }
        for (i=1;i<=n;i++){
            printf("%d ",ara[i]);
        }
	}
	return 0;
}
