#include<stdio.h>
int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        long long int l,r;
        scanf("%lld %lld",&l,&r);
        while((l|(l+1))<=r)
        {
            l=l|(l+1);
        }
        printf("%d\n",l);
    }
    return 0;
}