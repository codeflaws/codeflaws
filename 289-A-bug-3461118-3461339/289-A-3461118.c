#include<stdio.h>

int main(int argc, char *argv[]){

    int n,k;
    long int count=0;
    scanf("%d %d",&n,&k);
    while(n--){
        long int l,r,i;
        scanf("%ld %ld",&l,&r);
        for(i=l;i<=r;i++,count++);
    }
    if(count%k==0){
        printf("0\n");
    }else if(count<k){
        count = k-count;
    }else{
        count = k-(count%k);
        printf("%ld\n",count);
    }
    return 0;
}
