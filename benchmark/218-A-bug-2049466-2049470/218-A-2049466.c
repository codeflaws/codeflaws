#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n,k,i;
    scanf("%d %d",&n,&k);
    int length=2*n+1,A[length],B[length];
    
    for(i=0;i<length;i++){
        scanf("%d",&A[i]);
    }
    
    for(i=0;i<length;i++)
        B[i]=A[i];
    
    for(i=1;i<length-1;i++){
        if(k<0)
            break;
        if(A[i]<A[i-1] && A[i]<A[i+1]){
            B[i]=A[i];
            k--;
            continue;
        } else if((A[i]>A[i-1] && A[i]>A[i+1]) && (A[i]-1>A[i-1] && A[i]-1>A[i+1])){
            B[i]=A[i]-1;
            k--;
        }
    }
    for(i=0;i<length;i++)
        printf("%d ",B[i]);
    return 0;
}