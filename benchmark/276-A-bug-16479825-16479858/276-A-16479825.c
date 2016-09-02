#include<stdio.h>
int main(int argc, char *argv[])
{
        long long int i,j,n,k,x=0;
        scanf("%lld%lld",&n,&k);
        long long int f[n],t[n];
        for(i=0;i<n;i++)
        {
                scanf("%lld%lld",&f[i],&t[i]);
                 if(t[i]>k)
                {
                        f[i]=f[i]-(t[i]-k);

                }


        }
        x=0;
        for(j=0;j<n;j++)
        {
                if(x<f[j])
                x=f[j];
        }
        printf("%lld",x);

return 0;
}
