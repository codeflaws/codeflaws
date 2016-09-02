#include<stdio.h>

int main(int argc, char *argv[])
{
    int n, i;
    long long int maxYP[2] = {0,0}, minYP[2] = {1000000001, 1000000001}, p[2], maxXP[2] = {0, 0}, minXP[2] = {1000000001, 1000000001};

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%llu", &p[0]);
        scanf("%llu", &p[1]);

        if(maxYP[1] < p[1]){
            maxYP[0] = p[0];
            maxYP[1] = p[1];
        }
        if(minYP[1] > p[1]){
            minYP[0] = p[0];
            minYP[1] = p[1];
        }

        if(maxXP[0] < p[0]){
            maxXP[0] = p[0];
            maxXP[1] = p[1];
        }
        if(minXP[0] > p[0]){
            minXP[0] = p[0];
            minXP[1] = p[1];
        }
    }

    long long int gapY = maxYP[1] - minYP[1], gapX = maxXP[0] - minXP[0];

    if(gapY > gapX)
        printf("%llu\n", gapY * gapY);
    else
        printf("%llu\n", gapX * gapX);

    return 0;
}
