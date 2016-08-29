#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,i,cc;
    scanf("%d",&n);
    for( i = 0 ; i < 10 ; i++){
        cc = (int)pow(2 , i);
        if( n == cc){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
