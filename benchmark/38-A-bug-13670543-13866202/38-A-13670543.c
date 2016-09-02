#include<stdio.h>

int main(int argc, char *argv[])
{
    int i,j,l,m,n,sum=0,A[50],B[50];
    scanf("%d",&i);
    for(j=0;j<i-1;j++)
    {
        scanf("%d",&A[j]);
    }
    scanf("%d %d",&m,&n);
    for(j=n-1;j>m-1;j--)
    {
        sum=sum+A[j-1];
    }
    printf("%d",sum);
    return 0;
}
