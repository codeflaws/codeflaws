#include<stdio.h>
int main(int argc, char *argv[]){
    int a,b,m,n,i,j,k;
    int t[4000]={0};
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
    scanf("%d %d",&a,&b);
        t[a]+=b;
        }
        k=0;
    for(i=1;i<=n+1;i++){
    if(t[i]>m){
        k+=m;
        t[i]-=m;
        if(t[i]>m)t[i+1]+=m;
        else t[i+1]+=t[i];

    }
    else k+=t[i];
}

        printf("%d\n",k);
    return 0;
}
