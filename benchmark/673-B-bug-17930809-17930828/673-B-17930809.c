#include<stdio.h>

int max(int a,int b)
{
    return (a>b)?a:b;
}
int main(int argc, char *argv[])
{
    int i,t,x,y,n,m,mn=1000000000,mx=-1;
    scanf("%d%d",&n,&m);
    int a[m],b[m];
    for(i=0;i<m;i++)
    {
        scanf("%d%d",&x,&y);
        if(x>y)
        {
            t=x;x=y;y=t;
        }
        a[i]=x;
        b[i]=y;
    }
    for(i=0;i<m;i++)
    {
        if(a[i]>mx)
        mx=a[i];
        if(b[i]<mn)
        mn=b[i];
    }
    printf("%d",max(0,mn-mx));
    return 0;
    
}