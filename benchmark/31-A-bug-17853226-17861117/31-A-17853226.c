#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,i,j,k,x=1;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	
	for(j=0;j<n;j++){
	for(k=0;k<n;k++){
		if(i!=j && j!=k && i!=k){
			if(a[i]==a[j]+a[k]){
				printf("%d %d %d",i,j,k);
				x=0;
			break;
			}
			if(x==0)break;
		}
	if(x==0)break;
	}
   	
    if(x==0)break;}
    if(x==0)break;
    
}
if(x==1)printf("-1\n");
return 0;
}
