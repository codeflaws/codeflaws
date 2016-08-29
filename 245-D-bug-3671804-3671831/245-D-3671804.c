#include<stdio.h>

int main(int argc, char *argv[])
{
    int n,ans,a,i,j;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        ans=0;
        for (j=0;j<n;j++)   { scanf("%d",&a); if (i!=j); ans|=a; }
        printf("%d ",ans);
    }
    printf("\n");
    return 0; 
} 