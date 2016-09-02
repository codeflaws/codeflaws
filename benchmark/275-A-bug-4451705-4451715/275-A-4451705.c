#include<stdio.h>
int main(int argc, char *argv[])
{
    int a[4][4],b[5][5],i,j,k,l,m,n;
    for(i=1;i<4;i++)
    {
        for(j=1;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            b[i][j]=1;
        }
    }
    for(i=1;i<4;i++)
    {
        for(j=1;j<4;j++)
        {
            if(a[i][j]%2!=0)
            {
                if(b[i][j]==1)
                {
                    b[i][j]=0;
                }
                else if(b[i][j]==0)
                {
                    b[i][j]=1;
                }
                if(b[i][j+1]==1)
                {
                    b[i][j+1]=0;
                }
               else  if(b[i][j+1]==0)
                {
                    b[i][j+1]=1;
                }
                if(b[i+1][j]==1)
                {
                    b[i+1][j]=0;
                }
               else  if(b[i+1][j]==0)
                {
                    b[i+1][j]=1;
                }
                if(b[i-1][j]==1)
                {
                    b[i-1][j]=0;
                }
              else  if(b[i-1][j]==0)
                {
                    b[i-1][j]=1;
                }
                if(b[i][j-1]==1)
                {
                    b[i][j-1]=0;
                }
               else if(b[i][j-1]==0)
                {
                    b[i][j-1]=1;
                }
            }
            else continue;
        }
    }
    for(i=1;i<4;i++)
    {
        for(j=1;j<4;j++)
        {
            if(j==3)
            printf("%d",b[i][j]);
            else
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
