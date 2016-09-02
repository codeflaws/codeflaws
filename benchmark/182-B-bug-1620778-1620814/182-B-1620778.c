#include<stdio.h>
int main(int argc, char *argv[]){
    int ans;
    int d,n,i,a;
    ans=0;
    scanf("%d",&d);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(i!=n-1)
        ans=ans+d-a;
        }
    printf("%d\n",ans);

}
