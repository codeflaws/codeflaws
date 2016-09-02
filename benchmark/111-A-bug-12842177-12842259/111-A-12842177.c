#include <stdio.h>

int main(int argc, char *argv[])
{
    long long int n,x,y,flag=0;

    long long int a[100000];
    int indx=0,i=0;
    scanf("%lld %lld %lld",&n,&x,&y);
    long long int num_sum;
    long long p;
    p=1;
    while(i<n-1){
        a[indx++]=1;
        y--;
        if(y<0){
            printf("-1");
            return 0;
        }
        x--;
        i++;
    }
    a[indx]=y;
    //printf("%d",a[indx]);
    if(a[indx]*a[indx]>=x){
        for(i=indx;i>=0;i--){
            printf("%d\n",a[i]);
        }
    }
    else{
        printf("-1");
    }
    return 0;
}
