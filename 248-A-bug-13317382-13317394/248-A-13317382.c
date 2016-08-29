#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,i,j,cnt,ct,mini,mihi;
	scanf("%d",&n);
	int ara[1000][1000];
	for (i=0;i<n;i++){
		for (j=0;j<2;j++){
			scanf("%d",&ara[i][j]);
		}
	}
	cnt=0;
	ct=0;
	for (i=0;i<n;i++){
		if (ara[i][0]==1){
			cnt=cnt+1;
		}
		if (ara[i][1]==0){
			ct=ct+1;
		}
	}
	mini=cnt;
	if((n-cnt)<mini){
		mini=n-cnt;
	}
	mihi=ct;
	if ((n-ct)<mihi){
		mihi=n-ct;
	}
	printf("%d",mini+mihi);

	return 0;
}
