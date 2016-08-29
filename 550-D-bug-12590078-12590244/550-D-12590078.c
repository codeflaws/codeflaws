#include<stdio.h>

int main(int argc, char *argv[])
{
    int k,n,m,i,j,l,x,y,p;

    scanf("%d",&k);
    if(k==1)printf("YES\n2 1\n1 2\n");
    else if(k%2==0)printf("NO\n");
    else
    {
        n=2*k*k-2*k+2;
        m=n*k/2;
        printf("YES\n%d %d\n",n,m);
        printf("%d %d\n",1,n/2+1);
        p=k-1;
        for(i=2;i<=k;i++)printf("%d %d\n%d %d\n",1,i,n/2+1,n/2+i);
        for(i=1;i<=p;i++)
            for(j=i*p+1;j<=(i+1)*p;j++)printf("%d %d\n%d %d\n",i+1,j+1,i+n/2+1,j+n/2+1);
        for(i=1;i<=p;i++)
        {
            x=i*p+2;
            y=(i+1)*p+1;
            for(j=x;j<y;j++)
                for(l=j+1;l<=y;l++)
                    printf("%d %d\n%d %d\n",j,l,j+n/2,l+n/2);
            if(i%p)for(j=x;j<=y;j++)printf("%d %d\n%d %d\n",j,j+p,j+n/2,j+p+n/2);
        }

    }

    return 0;
}
