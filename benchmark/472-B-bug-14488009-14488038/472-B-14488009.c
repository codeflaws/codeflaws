#include<stdio.h>
#include<string.h>
#include<math.h>
int main(int argc, char *argv[])
{
    long long int n,k,sum=0;
    scanf("%lld %lld",&n,&k);
    n = n + 1;
    int ara[n];
    ara[0]=0;
    int i,j,temp,z;
    for(z=1;z<n;z++){
        scanf("%d", &ara[z]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(ara[i]>ara[j]){
                temp = ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }
    }
    for(z=n-1;z>=0;z=z-k){
        sum = sum + 2*(ara[z]-1);
    }

    printf("%lld", sum);

    return 0;
}
