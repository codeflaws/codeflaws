#include<stdio.h>
int main(int argc, char *argv[])
{
    int n[100000],p[100000],z[100000],i,j,k=1000000,l,m,change=0,nn,np,nz;
    n[0]=0;
    p[0]=0;
    z[0]=0;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&j);
        if(i==0)
        {
            if(j<0)
            n[0]=1;
            else if(j>0)
                p[0]=1;
            else if(j==0)
                z[0]=1;
        }
        else
        {
            if(j<0)
            {
                n[i]=n[i-1]+1;
                p[i]=p[i-1];
                z[i]=z[i-1];
            }
            else if(j>0)
            {
                n[i]=n[i-1];
                p[i]=p[i-1]+1;
                z[i]=z[i-1];
            }
            else if(j==0)
            {
                n[i]=n[i-1];
                p[i]=p[i-1];
                z[i]=z[i-1]+1;
            }
        }
    }
    for(i=1;i<m;i++)
    {
        nn=p[i-1]+z[i-1];
        np=(n[m-1]-n[i-1])+(z[m-1]-z[i-1]);
        change=nn+np;
        if(change<=k)
            k=change;
    }
    printf("%d",k);
    return(0);
}
