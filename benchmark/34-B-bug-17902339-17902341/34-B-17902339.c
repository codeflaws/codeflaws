#include<stdio.h>
int i,n,m,a[104],ans;
int main(int argc, char *argv[]){
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",a+i);
		int j,t;
		j=i;
		while(j){
			if(a[j-1]>a[j]){
				t=a[j-1];a[j-1]=a[j];a[j]=t;
				j--;
			}
			else break;}}
		for(i=0;i<m;i++)
			if(a[i]<0)
				ans+=a[i];
		printf("%d",ans);
return 0;
}

