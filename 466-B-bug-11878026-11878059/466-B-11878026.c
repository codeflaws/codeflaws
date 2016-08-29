#include<stdio.h>

int main(int argc, char *argv[])
{
    long long int n,a,b,i,j,c,d,k,p,q,g,h;
    scanf("%lld %lld %lld",&n,&a,&b);
    n=n*6;
    i=n-(a*b);
    if(i<=0){
        printf("%lld\n%lld %lld",a*b,a,b);
        return 0;
    }
    else if(i%a==0){
        b+=i/a;
        printf("%lld\n%lld %lld",n,a,b);
        return 0;
    }
    else if(i%b==0){
        a+=i/b;
        printf("%lld\n%lld %lld",n,a,b);
        return 0;
    }
    else{
        c=(a<b)?a:b;
        d=(a>b)?a:b;
        for(j=c;j*j<=n;j++){
            if(n%j==0&&n/j>=d){
                 if(a>b)
                 printf("%lld\n%lld %lld",n,n/j,j);
                 else printf("%lld\n%lld %lld",n,j,n/j);
                 return 0;
            }
        }
    }
    /*area baraaite hoile kivabe minimize korbo jani na*/
    p=b+(i/a)+1;
    j=a*p;
    h=a+(i/b)+1;
    q=h*b;
    if(j<q)g=j;
    else g=q;
    for(k=g-1;k>n;k--){
        for(i=c;i*i<=k;i++){
            if(k%i==0&&k/i>=d){
                if(a>b)
                printf("%lld\n%lld %lld",k,k/i,i);
                else printf("%lld\n%lld %lld",k,i,k/i);
                return 0;
            }
        }
    }
    if(j<q)printf("%lld\n%lld %lld",j,a,p);
    else printf("%lld\n%lld %lld",q,h,b);
    return 0;
}
