#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){
   int n,i;
   int x;

    scanf("%d", &n);

    int pre[n];
    for(i=0; i<n; i++){
        scanf("%d", &x);
        pre[x-1]=i+1;
    }

    for(i=0; i<n; i++){
        printf("%d", pre[i]);

    }
    return 0;
}
