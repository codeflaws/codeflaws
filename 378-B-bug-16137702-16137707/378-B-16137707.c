#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,i,j,r,s,l;
	scanf("%d",&n);
	int ara[100000][2];
	int a[100000];
	int b[100000];
	for (i=0;i<n;i++){
		for (j=0;j<2;j++){
			scanf("%d",&ara[i][j]);
		}
	}
	if (n==1){
		if (ara[0][0]<ara[0][1]){
			printf("1\n");
			printf("0");
		}
		else if (ara[0][0]==ara[0][1]){
			printf("1\n");
			printf("1");
		}
		else{
			printf("0\n");
			printf("1");
		}
	}
	else{
	for (i=0;i<n/2;i++){
		a[i]=1;
		b[i]=1;
	}
	s=0;
	r=0;
	l=0;
	while (1){
		if (ara[s][0]>ara[r][1]){
			b[r]=1;
			r=r+1;
			l=l+1;
		}
		else{
			a[s]=1;
			s=s+1;
			l=l+1;
		}
		if (l==n){
			break;
		}
	}
	for (i=0;i<n;i++){
		printf("%d",a[i]);
	}
	printf("\n");
	for (i=0;i<n;i++){
		printf("%d",b[i]);
	}
	}
	return 0;
}
