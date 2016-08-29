#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,c,i,j,k;
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        for(j=a-i;j>0;j--){
            printf("  ");
        }
        for(j=0;j<=i;j++){
            printf("%d",j);
            if(i!=0) printf(" ");
        }
     for(j=i-1;j>=0;j--){
            printf("%d",j);
            if(j!=0) printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<a;i++){
        printf("  ");
        for(j=0;j<i;j++){
            printf("  ");
        }
        for(j=0;j<a-i;j++){
            printf("%d ",j);
        }
        for(j=a-i-2;j>=0;j--){
            printf("%d",j);
            if(j!=0) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
