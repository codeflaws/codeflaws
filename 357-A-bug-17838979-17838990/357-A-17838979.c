#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    int i,j,n,x,y,s[100],a[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++) scanf("%d",&a[i]);
    scanf("%d %d",&x,&y);
	for(i=0;i<=n;i++) s[i]=(!i)?0:s[i-1]+a[i];
    for(i=1;i<=n;i++){
        if(s[i]<=y && s[i]>=x){
			if(s[n]-s[i]>=x && s[n]-s[i]<=y){
				printf("%d",i+1);
				exit(1);
			}
        }
    }
    printf("0");
    return 0;
}
