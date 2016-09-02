#include <stdio.h>
int arr[101],head[101];
int main(int argc, char *argv[]){
    int n,m,sum=0,a,b,k,i;
    scanf("%d%d",&n,&m);
    while(m--){
        scanf("%d%d%d",&a,&b,&k);
        arr[b]+=k;
        arr[a]-=k;
    }
    for(i=1;i<=n;i++)
        if(arr[i]>0)
          sum+=arr[i];
    printf("%d",sum);
   return 0;
}
