#include <stdio.h>

const int inf = 0x3f3f3f3f;

int main(int argc, char *argv[]){

    int i, max, num, n, ar[1010] = {0};

    max = -inf;

    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d", &num);
        ar[num]++;
    }

    for(i=0;i<=1000;i++){
        if(ar[i] > max )
            max = ar[i];
    }

    printf("%d\n", n-max);

    return 0;
}
