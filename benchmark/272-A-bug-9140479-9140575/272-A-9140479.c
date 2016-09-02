#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i, n, a, count=0, flag=5;
    scanf("%d", &n);
    i = n+1;
    while(n--){
        scanf("%d", &a);
        count += a;
    }
    if(count%(i+1)==0)
        flag--;
    if((count+1)%(i+1)==0)
        flag--;
    if((count+2)%(i+1)==0)
        flag--;
    if((count+3)%(i+1)==0)
        flag--;
    if((count+4)%(i+1)==0)
        flag--;
    printf("%d", flag);
    return 0;
}
