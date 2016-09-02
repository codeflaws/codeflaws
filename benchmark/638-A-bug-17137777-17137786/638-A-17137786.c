#include<stdio.h>

int main(int argc, char *argv[])
{
    int time=1;
    long n,a;
    scanf("%ld%ld",&n,&a);
    long arr[n/2];
    long i,j;
    if(a==1 || a==n){
        printf("%d",time);
        return 0;
    }
    else if(a%2!=0){
        arr[0]=1;
        for(i=1;i<n/2;i++){
        arr[i]=arr[i-1]+2;
        time++;
        if(arr[i]==a){
            printf("%d",time);
            return 0;
        }
    }
    }
    else {
        arr[0]=n;
        for(i=1;i<n/2;i++){
        arr[i]=arr[i-1]-2;
        time++;
        if(arr[i]==a){
            printf("%d",time);
            return 0;
        }

    }
    }
    printf("%d",time);
}
