#include <stdio.h>
#define max(a,b) a>b?a:b
 
 
int main(int argc, char *argv[]){
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    int x = max(a+1,n-b);
    printf("%d ", n - x + 1);
    return 0;
}