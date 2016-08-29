#include <stdio.h>
#define N 6

int main(int argc, char *argv[])
{
    int a, b;
    int i, dist_a, dist_b;
    int win_a, win_b, draw;


    scanf("%d%d", &a, &b);

    for(i=1, draw=0, win_a=0, win_b=0; i<=N; i++){
        if(a-i>=0)
            dist_a=a-i;
        else
            dist_a=i-a;
        if(b-i>=0)
            dist_b=b-i;
        else
            dist_b=i-b;


        if(dist_a<dist_b)
            win_a++;
        else if(dist_b<dist_a)
            win_b++;
        else
            draw++;
    }


    printf("%d %d %d\n", win_a, draw, win_b);

    return 0;
}
