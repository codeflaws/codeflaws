#include <stdio.h>
#include <stdlib.h>

int isPrime(int num){

    int i ;
    if (num==1){
        return 0;
    }
    for (i=sqrt(num);i>1;i--)
        if (num%i==0)
            return 0;
    return 1;

}

int printPrimes(int A[],int n){

    int i=0 , j=2 , z=0;
    while (j<n){

        if(isPrime(j)==1){
            A[z]=j;
            z++;
            i++;
        }
        j++;

    }
    return z ;
}


int main(int argc, char *argv[])
{
    int i,j=0,n,k,h,g;
    int A[1000];
    int z;
    scanf("%d %d",&n,&k);
    z=printPrimes(A,n);
    for(i=z;i>=0;i--){
            for(h=i-2;h>=0;h--){
                if(A[i-1]==A[h]+A[h-1]+1){
                    j++;
                }

            }
    }
    if (j>=k){
        printf("YES");
    }
    else
        printf("NO");
    return 0;
}
