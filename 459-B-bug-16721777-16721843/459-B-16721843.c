#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
int arr[200005];
int compare(int *a,int *b){
    return *a-*b;
}
long long int bound(int arr[],int size,int target,int check){
    int f,m,l;
    f=0;
    l=size;
    if(!check){
    while(f<l){
            m=(f+l)/2;
        if(arr[m]<=target){
        f=m+1;
        }
        else l=m;
    }
    return l;}
    while(f<l){
            m=(f+l)/2;
        if(arr[m]>=target){
        l=m;
        }
        else f=m+1;
    }
    return size-l;
}
int main(int argc, char *argv[]){
    int a,b,c;
    scanf("%d",&a);
    int i;
    int min=INT_MAX;
    int max=0;
    for(i=0;i<a;i++){
            scanf("%d",arr+i);
            if(arr[i]>max)
                max=arr[i];
            if(arr[i]<min)
                min=arr[i];
    }
    qsort(arr,a,sizeof(int),compare);
    if(abs(max-min)==0){
     printf("%d %lld",abs(max-min),(long long int)(((long long int)1+((long long int)a-1))*(((long long int)a-1)/2.0)));
     return 0;
    }
    printf("%d %lld",abs(max-min),bound(arr,a,max,1)*(long long int)bound(arr,a,min,0));


}
