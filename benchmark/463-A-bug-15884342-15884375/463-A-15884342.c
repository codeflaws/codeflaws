#include<stdio.h>
int main(int argc, char *argv[])
{
   long int a,q=0,n,m,i,b,c,r,u=0,p=0;
    scanf("%ld%ld",&n,&m);
    m=m*100;
    for(i=0;i<n;i++)
    {
        scanf("%ld%ld",&a,&b);
        c=a*100+(b);
        if(m>=c)
        {
           r=100-b;
            if(u<r&b!=100)
            {
                u=r;
            }
           ++p;
    }

    }
    if(p==0)
        printf("-1");
    else
        printf("%ld",u);
    return 0;
}
