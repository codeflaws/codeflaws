#include<stdio.h>
int main(int argc, char *argv[])
{
	int a[103],n,i,k;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
	 scanf("%d",&a[i]);
	int count=a[k];
	for(i=1;;i++){
		if(k-i<=0||k+i>n) break;
		if(a[k-i]==a[k+i]) count+=a[k+i]<<1;
	}
	if(k-i<=0){
		for(int j=k+i;j<=n;j++)
			count+=a[j];
	}
	else{
		for(int j=1;j<k-i;j++)
			count+=a[j];
	}
	printf("%d\n",count);
	return 0;
} 