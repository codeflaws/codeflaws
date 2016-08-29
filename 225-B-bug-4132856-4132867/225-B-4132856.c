#include<stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define N 50
typedef long long ll;
ll f[N];
int main(int argc, char *argv[])
{
    int s,k;
    int i,j,ct=0;
    ll ans[N];
    scanf("%d%d",&s,&k);
     f[0]=f[1]=1;
     f[2]=2;
    for(i=3;i<N;i++)
    {
        if(i>=k+1)
            f[i]=2*f[i-1]-f[i-k-1];
        else for(j=i-1;j>=max(i-k,0);j--)
            f[i]+=f[j];
    }
    for(i=N-1;i>0;i--)
    {
       if((s>=f[i]))
        {
            s-=f[i];
            ans[ct++]=f[i];
        }
        if(s==0)
        {
            if(ct==1){
                    printf("%d\n",ct+1);
                printf("0 ");
            }
            for(i=0;i<ct;i++)
                printf("%lld%c",ans[i],i==ct-1?'\n':' ');
            return 0;
        }
    }
        return 0;
}
