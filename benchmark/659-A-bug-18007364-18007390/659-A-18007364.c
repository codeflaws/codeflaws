#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,a,b,i,j,k;
    scanf("%d %d %d",&n,&a,&b);
    if (b>=0){
        k=(b%n)+a;
        printf("%d",k);
    }
    else {
        i=a+b;
        if (i>0){
            printf("%d",i);
        }
        else {
            i=-i;
             k=n-(i%n);
            printf("%d",k);
        }

    }
   // printf("%d",k);
    return 0;
}
