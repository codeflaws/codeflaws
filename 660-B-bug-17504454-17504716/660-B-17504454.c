#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,p,i,j,k;
    scanf("%d %d",&n,&m);
    int man[n][4];
    k=1;
    for(i=n-1;i>=0;i--)
    {
        p=k;
        for(j=0;j<4;j++)
        {
            if(j==0)
            {
                if(p>m)
                {
                    man[i][j]=0;
                }
                else
                {
                    man[i][j]=p;
                }
            }
            else if(j==1)
            {
                if(p+(2*n)>m)
                {
                    man[i][j]=0;
                }
                else
                {
                    man[i][j]=p+(2*n);
                }
            }
            else if(j==2)
            {
                if(p+(2*n)+1>m)
                {
                    man[i][j]=0;
                }
                else
                {
                    man[i][j]=p+(2*n)+1;
                }
            }
            else if(j==3)
            {
                if(p+1>m)
                {
                    man[i][j]=0;
                }
                else
                {
                    man[i][j]=p+1;
                }
            }
        }
        k=k+2;
    }
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<4;j++)
        {
            k=j;
            if(j==0)
            {
                k=1;
            }
            else if(j==1)
            {
                k=0;
            }
            if(man[i][k]!=0)
            {
                printf("%d ",man[i][j]);
            }
        }
        //printf(" ");
    }
return 0;
}
