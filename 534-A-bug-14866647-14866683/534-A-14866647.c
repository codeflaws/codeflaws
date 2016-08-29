#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    int n,i,j,k,roll[5001],m,l;
    scanf("%d",&n);
    if(n==1 || n==2 || n==3 || n==4){
        if(n==4){
            printf("%d\n",n);
            printf("2 4 1 3\n");
            return 0;
        }
        if(n==1){
            printf("%d\n",n);
            printf("1 \n");
            return 0;
        }
        else{
            printf("%d\n",n-1);
            for(i=1; i<=n; i+=2){
                printf("%d ",i);
            }
            printf("\n");
        }
    }
    else{
        k=0;
        for(i=1; i<=2; i++){
            for(j=i; j<=n; j+=2){
                roll[k]=j;
                k++;
            }
        }
        printf("%d\n",k);
        for(m=0; roll[m]!='\n'; m++){
            if(abs(roll[m]-roll[m+1])!=1){
                printf("%d ",roll[m]);
            }
        }
        printf("\n");
    }
    return 0;
}
