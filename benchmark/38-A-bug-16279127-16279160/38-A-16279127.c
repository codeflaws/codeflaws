#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int n,*d,a,b,i,j;
    scanf("%d",&n);
    d=(int *)malloc(sizeof(int)*(n-1));
    for(i=0;i<n-1;i++){
            scanf("%d",&d[i]);
    }

    scanf("%d %d",&a,&b);
    int sum=0;
    for(i=0,j=a+1;j<=b;i++){
        sum+=d[i];
        j++;
    }
    free(d);
    printf("%d",sum);
    return 0;
}
