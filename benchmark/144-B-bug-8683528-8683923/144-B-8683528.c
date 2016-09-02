#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    int i;
    int j;
    int r;
}radiator;

radiator rad[1000];
int cnt, n;
void distance(int x, int y)
{
    int i;
    for(i = 0;i < n;i++)
    {
        if(sqrt((rad[i].i - x) * (rad[i].i - x) + (rad[i].j - y) * (rad[i].j -y)) <= rad[i].r)
        {
            cnt--;
            break;
        }
    }
    return;
}
int main(int argc, char *argv[])
{
    int x1, y1, x2, y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    cnt = (abs(x1 - x2) + 1)*2 + (abs(y1 - y2) - 1)*2;
    scanf("%d",&n);
    int i, j, k;
    for(i = 0;i < n;i++)
        scanf("%d%d%d",&rad[i].i,&rad[i].j,&rad[i].r);
    for(i = x1 < x2 ? x1 : x2, j = y1 < y2 ? y1 : y2, k = y1 > y2 ? y1 : y2;j <= k;j++)
        distance(i,j);
    for(i = (x1 < x2 ? x1 : x2) + 1, j = y1 > y2 ? y1 : y2, k = x1 > x2 ? x1 : x2;i <= k;i++)
        distance(i,j);
    for(i = x1 > x2 ? x1 : x2, j = (y1 > y2 ? y1 : y2) - 1, k = y1 < y2 ? y1 : y2;j >= k;j--)
        distance(i,j);
    for(i = (x1 < x2 ? x1 : x2) + 1, j = y1 < y2 ? y1 : y2, k = (y1 > y2 ? y1 : y2) - 1;i <= k;i++)
        distance(i,j);
    printf("%d\n",cnt);
    return 0;
}