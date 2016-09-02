#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int max(int a,int b){
   return a>b?a:b;
}
int main(int argc, char *argv[])
{
    int k,a,b,v;
    scanf("%d%d%d%d",&k,&a,&b,&v);
    printf("%d\n",max(ceil((double)b/(k-1)),ceil((double)a/v-b)));
    return 0;
}

