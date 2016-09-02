#include <stdio.h>
int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);
    if (n%2==0 && n>0){
        if (n%4==0)
            printf("%d", n/4-1);
        else if (n%4!=0)
            printf("%d", n/4);
    }
    return 0;
}