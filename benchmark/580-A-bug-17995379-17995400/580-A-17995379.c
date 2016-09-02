#include <stdio.h>

int main(int argc, char *argv[])
{
    long long int n,count=0,max;
    int i,j,k;
    scanf("%lld",&n);
    long long int a[n],c[n];
    
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    
    j=0;
    for(i=0;i<n-1;i++){
        if(a[i]<=a[i+1]){
            k=1;
            count++;
        }
        else{
            k=0;
            count++;
            c[j]=count;
            j++;
            count=0;
        }
    }
    
    if(k==1){
        count++;
        c[j]=count;
        j++;
    }
    
    max=c[0];
    for(i=0;i<j;i++){
        if(c[i]>max){
            max=c[i];
        }
    }
    
    printf("%lld\n",max);
    
    return 0;
}
