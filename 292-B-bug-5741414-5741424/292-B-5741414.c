#include <stdio.h>
int node[100001],sum[100001];
int main(int argc, char *argv[]){
    int n,m,a,b,i;
    scanf("%d%d",&n,&m);
    while(m--){
        scanf("%d%d",&a,&b);
        node[a]++,node[b]++;
    }
    for(i=1;i<=n;i++)
        sum[node[i]]++;
    if(sum[2]==n)
        printf("ring topology");
    else if(sum[2]==n-2&&sum[1]==2)
         printf("bus topology");
    else if(sum[1]==n-1&&sum[n-1]==1)
        printf("star topology");
    else
        printf("unknow topology");
   return 0;
}
