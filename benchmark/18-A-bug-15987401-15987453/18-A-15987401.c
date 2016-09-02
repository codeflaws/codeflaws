#include <stdio.h>
#include <stdlib.h>

typedef struct sPOINT{
    int x,y;
} sPOINT;

int isright(sPOINT p[3]);

int main(int argc, char *argv[])
{
    sPOINT p[3];
    scanf("%d %d %d %d %d %d", &p[0].x, &p[0].y, &p[1].x, &p[1].y, &p[2].x, &p[2].y);
    if(isright(p)){
        printf("RIGHT");
        return 0;
    }
    else{
        int i;
        for(i = 0; i < 3; i++){
            p[i].x++;
            if(isright(p)){
                printf("ALMOST");
                return 0;
            }
            p[i].x -= 2;
            if(isright(p)){
                printf("ALMOST");
                return 0;
            }
            p[i].x++;
            p[i].y++;
            if(isright(p)){
                printf("ALMOST");
                return 0;
            }
            p[i].y -= 2;
            if(isright(p)){
                printf("ALMOST");
                return 0;
            }
            p[i].y++;
        }
        printf("NEITHER");
    }
    return 0;
}

int isright(sPOINT p[3]){
    int lengthsqr[3];
    lengthsqr[0] = (p[0].x-p[1].x)*(p[0].x-p[1].x)+(p[0].y-p[1].y)*(p[0].y-p[1].y);
    lengthsqr[1] = (p[1].x-p[2].x)*(p[1].x-p[2].x)+(p[1].y-p[2].y)*(p[1].y-p[2].y);
    lengthsqr[2] = (p[0].x-p[2].x)*(p[0].x-p[2].x)+(p[0].y-p[2].y)*(p[0].y-p[2].y);
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = i + 1; j < 3; j++)
            if(lengthsqr[j]<lengthsqr[i]){
                int templen = lengthsqr[j];
                lengthsqr[j] = lengthsqr[i];
                lengthsqr[i] = templen;
            }
    }
    return (lengthsqr[0]+lengthsqr[1]) == lengthsqr[2];
}
