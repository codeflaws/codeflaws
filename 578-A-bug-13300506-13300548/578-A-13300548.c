#include <stdio.h>

int main(int argc, char *argv[]) {
    // your code goes here
    int a, b;
    scanf("%d%d", &a, &b);
    if(a<b){
        printf("-1");
    }
    else{
        printf("%.12f", (float)(a+b)/(2*((a+b)/(2*b))));
    }
    return 0;
}
