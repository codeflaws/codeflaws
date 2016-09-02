#include <stdio.h>
#include <stdint.h>
#include <math.h>
int pow_2(int p){
    int retval=1;
    while(p>0){
        retval*=2;
        p--;
    }
    return retval;
}
int main(int argc, char *argv[]){
    int t,i,tmp,n;
    double lg;
    int64_t ans[100];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        if((n%2)==0){
            ans[i]=(n/2);
            ans[i]*=(n+1);
        }
        else{
            ans[i]=(n+1)/2;
            ans[i]*=n;
        }
        lg=log2((double)n);
        tmp=(int)lg;
        tmp=pow_2(tmp+1);
        tmp--;
        ans[i]=ans[i]-(2*tmp);
    }
    for(i=0;i<t;i++){
        printf("%lld\n",ans[i]);
    }
    return 0;
}
