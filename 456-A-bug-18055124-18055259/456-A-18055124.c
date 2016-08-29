#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,j;
    scanf("%d",&n);

    int a[n][2];

    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(n>=1000)
    {
            for(i=0;i<n-1;i++)
    {
        if( (a[i][0] < a[i+1][0] )&& (a[i][1] > a[i+1][1] ) )
        {
            printf("Happy Alex");
            return 0;
        }
    }
    }
    else
    {
     for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if( (a[i][0] < a[j][0] )&& (a[i][1] > a[j][1] ) )
           {
            printf("Happy Alex");
            return 0;
            }
        }

    }
    }


    printf("Poor Alex");
}

