#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,j,k;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            printf("%d",k);
            else
            printf("0");
        }
        printf("\n");
    }
    return 0;
}
