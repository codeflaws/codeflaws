#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,k,i;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=k+1;i>0;i--)
        printf("%d ",i);

    for(i=k+2;i<n;i++)
        printf("%d ",i);
    return(0);
}
