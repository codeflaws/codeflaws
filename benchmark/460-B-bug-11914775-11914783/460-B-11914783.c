#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    long long int a,b,c,i,count=0,sum1=1,l,k,d=0,e,sum;
    scanf("%lld%lld%lld",&a,&b,&c);
    long long int ara[100005];
    for(i=1;i<=81;i++){
        sum1=1;
        sum=0;
        d=0;
        l=i;
        for(k=1;k<=a;k++){
            sum1=sum1*l;
        }
        sum1=(sum1*b);
        sum1=sum1+c;
        e=sum1;
        while(e!=0){
            sum+=e%10;
            e/=10;
            d++;
        }
        if(d<=9&&sum==i){
            ara[count]=sum1;
            count++;
        }
    }
    printf("%lld\n",count);
    for(i=0;i<count;i++)printf("%lld ",ara[i]);
    return 0;
}
