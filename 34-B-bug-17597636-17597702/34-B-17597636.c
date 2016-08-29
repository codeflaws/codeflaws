#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int n,m,j=0,k,i,s,min;
    scanf("%d %d",&n,&m);
    int price[n];
    for(i=0;i<n;i++)
    {
        int t;
        scanf("%d",&t);
        if(t<0)
        {
            price[j]=t;
            j++;
        }
    }
    if(j<=m)
    {
        s=0;
        for(i=0;i<j;i++)
        {
            s=s+price[i];
        }
        //printf("%d",s);
    }
    else
    {
        min=0;s=0;n=0;
        for(i=0;i<j;i++)
        {
            if(min>price[i])
                min=price[i];
        }
        //printf("%d",min);
        for(i=min;;i++)
        {
            for(k=0;k<j;k++)
            {
                if(i==price[k])
                {
                    s=s+price[k];
                    n++;
                }
            }
            if(n==m)break;
        }
    }
    s=abs(s);
    printf("%d",s);
return 0;
}
