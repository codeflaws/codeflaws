#include <stdio.h>

int main(int argc, char *argv[]) {
    // your code goes here
    long long a,b;
    scanf("%lld %lld",&a,&b);
    if(a<b)
        printf("-1");
    else
        printf("%.12f",(a+b)/(2*(float)((a+b)/2*b)));
    
    
    
    return 0;
}
