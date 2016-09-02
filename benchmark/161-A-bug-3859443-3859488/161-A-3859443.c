#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,j,k=0,l=0,sv[100000],av[100000],n,m,x,y,p=0,c=0,low,high,mid,u[100000],v[100000],U,V,M=999999;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    for(i=0;i<n;i++)
        scanf("%d",&sv[i]);
    for(i=0;i<m;i++)
        scanf("%d",&av[i]);
    for(i=0;i<m;i++)
    {
        c=0;
        low=k;
        high=n-1;
        M=999999;
        while(low<=high)
        {
           mid=(low+high)/2;
           l=sv[mid];
           if(av[i]>=l-x && av[i]<=l+y)
           {
               if(mid<M)
               {
                   M=mid;
                   U=mid+1;
                   V=i+1;
               }
               high=mid-1;
               c++;
           }
           else if(av[i]<l+y)
                high=mid-1;
           else low=mid+1;
        }
        if(c>0)
        {
            u[p]=U;
            v[p]=V;
            p++;
        }
        k=M+1;
    }
    printf("%d\n",p);
    for(i=0;i<p;i++)
        printf("%d %d\n",u[i],v[i]);
    return(0);
}
