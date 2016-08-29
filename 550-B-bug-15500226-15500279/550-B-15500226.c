#include<stdio.h>
int comp(const void*a,const void *b);
void dfs(int min,int max,int sum,int k);
int n,l,r,x;
int ans=0;
int pro[100000];
int main(int argc, char *argv[]){
    scanf("%d%d%d%d",&n,&l,&r,&x);
    int i,j;
    for(i=0;i<n;i++)
        scanf("%d",&pro[i]);
    qsort((void*)pro,i,sizeof(int),comp);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            dfs(pro[i],pro[j],pro[i]+pro[j],j+1);
        }
    }
    printf("%d\n",ans);
    return 0;
}
int comp(const void*a,const void *b){
    return *(int*)a>*(int*)b?1:-1;
}
void dfs(int min,int max,int sum,int k){
    if(sum>r)
        return;
    int i;
    if(sum>=l&&sum<=r&&max-min>=x)
        ans++;
    for(i=k;i<n;i++)
        dfs(min,pro[i],sum+pro[i],k+1);
}
