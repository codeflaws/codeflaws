#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int t,i,j,count=0,flag;
    scanf("%d",&t);
    int a[100000][3];
    int n,p;
    for(i=0; i<t; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int k;
    for(k=0; k<t; k++)
    {
        for(i=1; i<a[k][0]; i++)
        {
            for(j=i+1; j<=a[k][0]; j++)
            {
                printf("%d %d\n",i,j);
                count++;
                if(count==2*a[k][0]+a[k][1])
                {
                    flag=count;
                    count=0;
                    break;
                }
            }
            if(flag==2*a[k][0]+a[k][1])
            {
                break;
            }
        }
    }
        return 0;
    }
