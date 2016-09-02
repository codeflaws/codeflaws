#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int k,n,w,price=0,i;
    fscanf(stdin,"%d %d %d",&k,&n,&w);
    for(i=1;i<=w;i++)  price+=k*i;
    printf("%d",price-n);
    exit (0);
return 0;
}