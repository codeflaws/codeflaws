#include<stdio.h>
int main(int argc, char *argv[])
{
    long long int n,i;
    scanf("%lld",&n);
    int arr[n];int brr[n];
    for(i=0;i<n;i++){scanf("%d",&arr[i]);}
    for(i=0;i<n;i++){scanf("%d",&brr[i]);}
    int d,count=0;
    for(d=1;d<10000002;d++){
        for(i=0;i<n;i++){if(d%arr[i]==brr[i]){count=count+1;break;}}
    }
    printf("%lf",(float)count/10000000);
    
    return 0;
}