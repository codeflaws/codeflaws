#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,j,k;
    scanf("%d",&n);
    int home[n],away[n];
    for(i=0;i<n;i++)
        scanf("%d %d",&home[i],&away[i]);
    int hash[100001]={0};
    for(i=0;i<n;i++)
        hash[home[i]]++;
    for(i=0;i<n;i++)
    {
        k=hash[away[i]];
        printf("%d %d",n-1+k,n-1-k);
    }
    return 0;
}
