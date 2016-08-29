#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,b,p,k,m,t,T,i,s1,s2;
    while(scanf("%d%d%d",&n,&b,&p)!=EOF)
    {
        s1=0;
        s2=n*p;
        while(n!=1)
        {
            t=n;
            m=n;
            T=0;
            k=1;
            while(t!=1)
            {
                t/=2;
                T++;
            }
            for(i=1;i<=T;i++)
                k*=2;
            m-=k;
            s1+=k/2;
            n=k/2+m;
        }
        printf("%d %d\n",s1*5,s2);
    }
    return 0;
}
