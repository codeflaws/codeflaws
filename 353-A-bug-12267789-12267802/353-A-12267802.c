#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,i,t=0,d=0,k1=0,k2=0,k3=0;
    scanf("%d",&n);
    int a[n][2];
    for(i=0;i<n;i++)
        {
            scanf("%d %d",&a[i][0],&a[i][1]);
            t+=a[i][0];d+=a[i][1];
        }
    if(t%2==0 && d%2==0)
    {
        printf("0");
        return 0;
    }
    if(t%2==1 && d%2==1){
    for(i=0;i<n;i++)
    {
        if((a[i][0]%2==1 && a[i][1]%2==0) || (a[i][0]%2==0 && a[i][1]%2==1))
                {k1=1;break;}
    }
    if(k1==1)
    {printf("1");return 0;}
    else
        {printf("-1");return 0;}
    }

    if(t%2==1 && d%2==0){
       /* for(i=0;i<n;i++)
    {
            if(a[i][0]%2==1 && a[i][1]%2==0)
                {k2=1;break;}
    }
    if(k2==1)
        {printf("1");return 0;}
    else*/
        printf("-1");return 0;
    }

    if(t%2==0 && d%2==1){
       /* for(i=0;i<n;i++)
    {
            if(a[i][0]%2==0 && a[i][1]%2==1)
                {k3=1;break;}
    }
    if(k3==1)
        {printf("1");return 0;}
    else*/
        printf("-1");return 0;
    }
    return 0;
}
