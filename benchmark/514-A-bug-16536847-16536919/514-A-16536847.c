#include<stdio.h>
long long int convert(int arr[],int a){
long long int x=0;
int i;
for(i=0;i<a;i++){
x=x*10+(arr[i]);
}
return x;
}
int main(int argc, char *argv[]){
    int arr[20];
    long long int input;
    int a,b,c,d;
    scanf("%lld",&input);
    long long int temp=input;
    int k=0;
    while(temp){
    arr[k++]=temp%10;
    temp/=10;
    }
    for(a=0;a<k/2;a++){
        c=arr[a];
        arr[a]=arr[k-1-a];
        arr[k-1-a]=c;
    }
    for(a=k-1;a>=0;a--){
    int old=arr[a];
    arr[a]=9-arr[a];
    if(convert(arr,k)>input){
            arr[a]=old;
    }}
    for(a=0;a<k;a++){
            printf("%d",arr[a]);
    }
}
