#include <stdio.h>

int a[100001];

int main(int argc, char *argv[]){
    int n,i,ans = 0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        a[i] += a[i-1];
    }
    for(i=1;i<n;i++){
        if(a[i]==a[n]-a[i])
            ans++;
    }
    printf("%d\n",ans);
    return 0;
}