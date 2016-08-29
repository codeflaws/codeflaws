#include <stdio.h>
#include <math.h>
int min(int a,int b){
		return (a<b)?a:b;
}
int main(int argc, char *argv[]){
    int cvp=0,n,i,a[10000]={0},b[10000]={0};
    scanf("%d %s %s",&n,a,b);
    for(i=0;i<n;i++)
    cvp+=min(abs(a[i]-b[i]),10-abs(a[i]-b[i]));
    printf("%d",cvp);
    return 0;
}