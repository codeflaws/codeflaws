#include <stdio.h>
#include <stdlib.h>

void printArray(int n,int k){
    int i,j,m=1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((i+j)%2==0&&m<=k){
                printf("L");
                m++;
            }
            else{
                printf("S");
            }
        }
        printf("\n");
    }
}
int main(int argc, char *argv[])
{
    int n,k;
    scanf("%d%d",&n,&k);

    if(n%2==0){
        if(k>(n/2*n))printf("NO");
        else{
            printf("YES\n");
            printArray(n,k);
        }
    }

    else if(n%2==1){
        if(k>(n/2*n/2+(n/2+1)*(n/2+1)))printf("NO");
        else{
            printf("YES\n");
            printArray(n,k);
        }
    }
    return 0;
}
