#include<stdio.h>
int main(int argc, char *argv[])
{
    long long int n,i,sum=0,j,k;
    scanf("%lld",&n);
    long long int a[n],b[5],c[5]={0};
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(i=0;i<5;i++){
        scanf("%lld",&b[i]);
    }
    for(i=0;i<n;i++){
        sum+=a[i];
        for(j=4;j>=0;j--){
            if(sum<b[0])break;
            if(sum>=b[j]){
                c[j]+=sum/b[j];
                k=sum/b[j];
                sum=sum%b[j];
            }
        }
        printf("%d\n",j);
    }
    for(i=0;i<5;i++)printf("%lld ",c[i]);
    printf("\n%lld",sum);
    return 0;
}
