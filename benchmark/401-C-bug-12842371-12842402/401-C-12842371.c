#include<stdio.h>

int main(int argc, char *argv[])
{
    int n0, n1, i, diff, j=0;
    scanf("%d %d", &n0, &n1);
    int h;
    h = (2*n0)+2;
    if(n1>h){
        printf("-1");
        return 0;
    }
    h = n0-1;
    if(n1<h){
        printf("-1");
        return 0;
    }
    int sum=n0+n1;
    if(n1<n0){
        printf("0");
        for(i=0;i<sum-1;i+=2){
            printf("10");
        }
        return 0;
    }
    if(n1>(2*n0) || n1==(2*n0)){
        diff = n1-n0;

        if(n1==2*n0){
            for(i=0;i<n0;i++){
                printf("110");
            }
            return 0;
        }
        else if(diff%n0==1 || (n0==1 && diff==2)){
            for(i=0;i<n0;i++){
                printf("110");
            }
            printf("1");
            return 0;
        }
        else if(diff%n0==2 || (n0==1 && diff==3)){
            for(i=0;i<n0;i++){
                printf("110");
            }
            printf("11");
            return 0;
        }
    }
    else if(n1<(2*n0)){
        diff = n1%n0;
        for(i=0;i<diff;i++){
            printf("110");
            j+=3;
        }
        sum = sum-j;
        for(i=0;i<sum;i+=2){
            printf("10");
        }
        return 0;
    }
    return 0;
}
