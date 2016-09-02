#include <stdio.h>
#include <math.h>
#define max(A,B) (A>B?A:B)

int main(int argc, char *argv[]){
        long long n,a,b,temp;
        scanf("%lld%lld%lld",&n,&a,&b);
        long long area=6*n,raiz,area1=1000000000000000000;
        if(area<=a*b) printf("%lld\n%lld %lld\n",a*b,a,b);
        else{
        int ind=1;
        if(a>b) temp=a, a=b, b=temp, ind=1;
        raiz=(long long)sqrt(6*n);
        long long i,j,ans1,ans2;
        for(i=1;i<=raiz+1;i++){
                if(i>=a){
                j=(6*n+i-1)/i;
                j=max(j,b);
                        if(i*j>=6*n && area1 > i*j ){
                        area1=i*j;
                        ans1=i;
                        ans2=j;
                        }
                }
        }
        if(ind)
        printf("%lld\n%lld %lld\n",area1,ans2,ans1);
        else
        printf("%lld\n%lld %lld\n",area1,ans1,ans2);
        }
        return(0);
}
