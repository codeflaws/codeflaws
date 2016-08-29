#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int A[1001],n,i,j,k=1,flag;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        scanf("%d",&A[i]);

    for(i=1;i<=n-1;i++){
        for(j=1;j<=n;j++){
            if(j%2==1){
                if(A[j]==n-1)
                    A[j]=0;
                else
                    A[j]++;
            }
            else{
                if(A[j]==0)
                    A[j]=n-1;
                else
                    A[j]--;
            }
        }
        flag=1;
        k=1;
        while(k<=n){
            if(A[k]!=k-1)
                flag=0;
            k++;
        }
        if(flag==1){
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    return 0;
}
