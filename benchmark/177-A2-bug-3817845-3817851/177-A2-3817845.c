#include<stdio.h>
int main(int argc, char *argv[]){
    long long int n,a[5][5]={0},i,j,s=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%lld",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j)
            s=s+a[i][j];
            if(i+j==n+1&&i!=j)
            s=s+a[i][j];
        }
    }
    j=((n-1)/2)+1;
    for(i=1;i<=n;i++){
        if(n%2!=0&&i!=j){
        s=s+a[i][((n-1)/2)+1];
        s=s+a[((n-1)/2)+1][i];
    }}
    printf("%lld",s);
    return 0;
}