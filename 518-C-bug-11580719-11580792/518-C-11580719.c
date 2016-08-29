#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int n,m,k,i,x,j,tmp;
    long long int count=0;
    scanf("%d %d %d",&n,&m,&k);
    int ind[n+1],pos[n+1];
    for(i=1;i<=n;i++){
        scanf("%d",&ind[i]);
        pos[ind[i]]=i;
    }
    for(i=0;i<m;i++){
        scanf("%d",&x);
        if(pos[x]%k!=0)count+=pos[x]/k+1;
        else count+=pos[x]/k;
        if(pos[x]>1){
            tmp=ind[pos[x]];
            ind[pos[x]]=ind[pos[x]-1];
            ind[pos[x]-1]=tmp;
            pos[x]--;
            pos[ind[pos[x]]]++;
        }
    }
    printf("%I64d",count);
    return 0;
}
