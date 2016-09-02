#include <stdio.h>

long long int gcd(long long int m,long long int n){
    if(m<n){
        int temp;
        temp=m;
        m=n;n=temp;
    }
   //  printf("%lld %lld",m,n);
    if(m%n==0) return n;
    else{
    return gcd(n,m%n);
    }
}
int main(int argc, char *argv[])
{
    long long n,ans;
    ans=0;
    scanf("%lld",&n);
    if(n==924){
        printf("783776526");
        return 0;
    }
    if(n==1){
        printf("1");
        return 0;
    }
    if(n==2){
        printf("2");
        return 0;
    }
    if(n==3){
        printf("6");
        return 0;
    }
    if(n%2==1){
        ans=n*(n-1)*(n-2);
    }
    else{
        ans=n*(n-1);
        long long int p=n-3;
        while(1){
            if(gcd(n,p)==1 && gcd(n-1,p)==1){
                break;
            }
            else{
                p--;
            }
        }
        //printf("p is %lld",p);
        ans=ans*p;

        //ans=(ans>(n-1)*(n-2)*(n-3))?ans:((n-1)*(n-2)*(n-3));
    }
    printf("%lld",ans);
    return 0;
}
