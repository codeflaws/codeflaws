#include <stdio.h>

int main(int argc, char *argv[])
{
    int i,t,j;
    int ara[5];

    for(i=0;i<4;i++) {
        scanf("%d",&ara[i]);
    }

    for(i=0;i<4-1;i++) {
        for(j=0;j<4-1;j++) {
            if(ara[j]<ara[j+1]) {
                t = ara[j];
                ara[j] = ara[j+1];
                ara[j+1] = t;
            }
        }
    }

    if(ara[0]<(ara[2]+ara[1])) {
        printf("TRIANGLE");
        return 0;
    }

    else if(ara[0]+ara[1]==ara[2]||ara[0]+ara[1]==ara[3]||ara[0]+ara[2]==ara[1]||ara[0]+ara[2]==ara[3]||ara[0]+ara[3]==ara[2]||ara[0]+ara[3]==ara[1]||ara[1]+ara[2]==ara[3]||ara[1]+ara[2]==ara[0]||ara[1]+ara[3]==ara[2]||ara[1]+ara[3]==ara[0]||ara[2]+ara[3]==ara[1]||ara[2]+ara[3]==ara[0]) {
        printf("SEGMENT");
    }

    else
        printf("IMPOSSIBLE");




}
