#include "stdio.h"

#define MAX(a,b) (((a)<(b))?(b):(a))

int main(int n, char *argv[]) {
    int i, answer;
    scanf("%d", &n);

    int dzy[100000];
    int left[100000];
    int right[100000];

    for(i=0; i<n;++i)
        scanf("%d", dzy+i);

    left[0] = 1;
    right[n-1] = 1;

    for(i=1; i<n; ++i) {
        if(dzy[i] > dzy[i-1])
            left[i] = left[i-1]+1;
        else
            left[i] = 1;
    }

    for(i=n-2; i>=0; --i) {
        if(dzy[i] < dzy[i+1])
            right[i] = right[i+1]+1;
        else
            right[i] = 1;
    }

    answer=MAX(right[1],left[n-2])+1;

    for(i=2; i<n-1; ++i) {
        int cur;
        if(dzy[i+1]-dzy[i-1] >=2) {
            cur = left[i-1]+right[i+1]+1;
        } else {
            cur = MAX(left[i-1],right[i+1])+1;
        }

        if(answer<cur)
            answer = cur;
    }

    printf("%d", answer);


    return 0;
}
