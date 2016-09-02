#include <stdio.h>
#define max(a,b) a>b?a:b
 
 
int main(int argc, char *argv[]){
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    printf("%d", n - max(a+1,n-b) + 1);
    return 0;
}