#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,j,count,cnt=0;
    printf("Enter the number of problms: \n");
    scanf("%d",&n);
    int ara[n][3];
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&ara[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<3;j++)
        {
            if(ara[i][j]==1)
            {
                count++;
            }
        }
        if(count>=2)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
