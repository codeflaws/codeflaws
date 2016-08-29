#include <stdio.h>
int main(int argc, char *argv[])
{
    int n,i,j,k,a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((c*a)%100!=0){
        k=(c*a)/100+1;
    }
    else{
        k=((c*a)/100);
    }
    j=k-b;
    printf("%d",j);
    return 0;
}
