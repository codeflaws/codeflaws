#include<stdio.h>
#include<math.h>
int t[5001];
int main(int argc, char *argv[])
{
    int n,i,c1=0,c2=0,c3=0,x,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
    }
    for(i=0;i<n;i++)
    {
        if(t[i]==1)
            c1++;
        if(t[i]==2)
            c2++;
        if(t[i]==3)
            c3++;
    }
    if(c1==0||c2==0||c3==0)
        {
            printf("0");
            return 0;
        }
    if(c1<=c2&&c1<=c3)
        {
           x=c1;
        }
    else if(c2<=c1&&c2<=c3)
        {
            x=c2;
        }
    else if(c3<=c2&&c3<=c1)
        {
           x=c3;
        }
        printf("%d\n",x);
        for(j=0;j<x;j++)
        {
            for(i=0;i<n;i++)
            {
                if(t[i]==1)
                {
                    printf("%d ",i+1);
                    t[i]=0;
                }
            }
            for(i=0;i<n;i++)
            {
                if(t[i]==2)
                {
                    printf("%d ",i+1);
                    t[i]=0;
                }
            }
            for(i=0;i<n;i++)
            {
                if(t[i]==3)
                {
                    printf("%d\n",i+1);
                    t[i]=0;
                }
            }
        }
        return 0;
}
