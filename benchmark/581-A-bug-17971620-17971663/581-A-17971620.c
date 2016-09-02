#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,i=0,j=0,l;
    int k=0;
    scanf("%d %d",&a,&b);
    if(a>b) i=1;
    else j=1;
    if(i) printf("%d",b);
    else if(j) printf("%d",a);
    if(i==1) k=(a-b);
    if(k % 2 != 0) k=(k-1)/2;
    else k=k/2;
    printf(" %d", k );
    return 0;
}
