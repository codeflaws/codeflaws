#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,m,i,l;
	scanf("%d %d",&n,&m);
	int ara[100000];
	for (i=0;i<2*n+1;i++){
		scanf("%d",&ara[i]);
	}
	l=0;
	for (i=1; ;i+=2){
		if ((ara[i]-1)>ara[i-1] && (ara[i]-1)>ara[i+1]){
		ara[i]=ara[i]-1;
		l=l+1;
		if (l==m){
			break;
		}
		}
	}
	for (i=0;i<2*n+1;i++){
		printf("%d ",ara[i]);
	}
	return 0;
}
