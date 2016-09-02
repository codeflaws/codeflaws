#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,k,i,j;
    scanf("%d %d",&n,&k);k--;
    int l=1,r=n;
    for(i=1;i<=n;i++){
        if(k%2){printf("%d ",l); l++;}
        else {printf("%d ",r); r--;}
        if(k>0) k--;
    }/*if(k%2==0) j=r;else j=r-1;//l-=1;if(k==1)r=n; else r+=1;
    while(j<=n){
        printf("%d ",j); j++;
    }*/
    return 0;
}
