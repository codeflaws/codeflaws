#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int C[100000];

int main(int argc, const char * argv[]) {
    int n, i, j, A, B;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", C + i);
    }
    i = 1; j = n - 1;
    A = C[0]; B = 0;
    while(i <= j){
        if(A <= B) A += C[i++];
        else if(A > B) B += C[j--];
    }
    printf("%d %d\n", i, n - i);
    
    return 0;
}
