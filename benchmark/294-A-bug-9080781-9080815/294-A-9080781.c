#include<stdio.h>

void shot(int a[],int m,int n,int N){
	if(m==0){
		a[1]+=a[0]-n;
		a[m]=0;
	}
	else if(m==N){
		a[m-1]+=n-1;
		a[m]=0;
	}
	else{
		a[m+1]+=a[m]-n;
		a[m-1]+=n-1;
		a[m]=0;
	}
}
int main(int argc, char *argv[]){
	int n,i,a[101],N,temp1,temp2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&N);
	while(N--){
		scanf("%d%d",&temp1,&temp2);
		shot(a,temp1-1,temp2,N);
	}
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	return 0;
}

