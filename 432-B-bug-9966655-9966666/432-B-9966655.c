#include<stdio.h>
long is_prime(long x);
int main(int argc, char *argv[]){
long n,i,j;
scanf("%ld",&n);
long a[n],b[100000]={0};
for(i=0;i<n;i++){
    scanf("%ld%ld",&j,&a[i]);
    b[j]+=1;
}
for(i=0;i<n;i++){
    printf("%ld %ld\n",n-1+b[(a[i])],n-1-b[(a[i])]);
}
}
