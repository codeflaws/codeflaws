#include <stdio.h>
#define M 1000000007
int n,k,i,c,d;
long long y,z,u,v,r;
int F(int a,int b){
    int r=1;
    for (;b;b>>=1,a=(long long)a*a%M){
        if (b&1)r=(long long)r*a%M;
    }
    return r;
}
int main(int argc, char *argv[]){
    scanf("%d%d",&n,&k);
    if (n<=++k){for(i=1;i<=n;i++)r+=F(i,k-1);}
    else{
        for (u=v=1;i<=k;i++){u=(u*(n-i))%M;if (i)v=((v*-i)%M+M)%M;}
        for (i=0,c=1,d=k;i<=k;i++,c++,d--){
            z=(z+F(i,k-1))%M;
            y=u*z%M*F(n-i,M-2)%M*F(v,M-2)%M;
            v=v*c%M*F(d,M-2)%M;
            if(i&1)y=M-y;
            r+=y;
        }
    }
    if (!--k&&n>1)r--;
    printf("%lld\n",r%M);
}
