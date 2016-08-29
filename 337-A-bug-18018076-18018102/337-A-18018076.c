#include <stdio.h>
int find(int n,int m,int a[]){
	int i,j,temp;
	for(i=0;i<m;i++){
		for(j=0;j<(m-i-1);j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	temp = a[n-1]-a[0];
	for(i=1;i<(m-n);i++){
		if((a[i+n-1]-a[i])<temp)
		temp = a[i+n-1]-a[i];
	}
	return temp;
}
int main(int argc, char *argv[]) {
	int n,m,a[50],i;
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	printf("%d\n",find(n,m,a));
	return 0;
}
