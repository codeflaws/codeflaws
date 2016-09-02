#include <stdio.h>
#include <stdlib.h>

int b[1010][1010];
int square(int x, int y)
{
    int count = 1;
    int right = b[x+1][y+1] + b[x+1][y] + b[x+1][y-1];
    int right2 =  b[x+2][y+1] + b[x+2][y] + b[x+2][y-1];
    int left = b[x-1][y+1] + b[x-1][y] + b[x-1][y-1];
    int left2 = b[x-2][y-1] + b[x-2][y] + b[x-2][y+1];
    int top = b[x-1][y-1] + b[x][y-1] + b[x+1][y-1];
    int top2 = b[x-1][y-2] + b[x][y-2] + b[x+1][y-2];
    int bot = b[x-1][y+1] + b[x][y+1] + b[x+1][y+1];
    int bot2 = b[x-1][y+2] + b[x][y+2] + b[x+1][y+2];


    //0 0 0 0 0
    //0 1 1 1 0
    //0 1 1 1 0
    //0 1 1 1 0
    //0 0 0 0 0
    int mid = left + right + b[x][y-1] + b[x][y+1] + count;
    if (mid == 9) return 1;



    //0 0 0 0 0
    //1 1 1 0 0
    //1 1 1 0 0
    //1 1 1 0 0
    //0 0 0 0 0
    count = mid;
    count -= right;
    count += left2;
    if (count == 9) return 1;
    count -= b[x][y+1] + b[x-1][y+1] + b[x-2][y+1];
    count += b[x][y-2] + b[x-1][y-2] + b[x-2][y-2];
    if (count == 9) return 1;
    count = mid - right + left2;
    count -= b[x][y-1] + b[x-1][y-1] + b[x-2][y-1];
    count += b[x][y+2] + b[x-1][y+2] + b[x-2][y+2];
    if (count == 9) return 1;

    count = mid;
    count -=left;
    count += right2;
    if (count == 9) return 1;
    count -= b[x][y+1] + b[x+1][y+1] + b[x+2][y+1];
    count += b[x][y-2] + b[x+1][y-2] + b[x-1][y-2];
    if (count == 9) return 1;
    count = mid - left + right2;
    count -= b[x][y-1] + b[x+1][y-1] + b[x+2][y-1];
    count += b[x][y+2] + b[x+1][y+2] + b[x+2][y+2];
    if (count == 9) return 1;

    count = mid;
    count -= top;
    count += bot2;
    if (count == 9) return 1;

    count = mid;
    count -= bot;
    count += top2;
    //printf("lol %d\n", count);
    if (count == 9) return 1;


    return 0;

}


int main(int argc, char *argv[])
{
    int n, m;

    scanf("%d %d", &n, &m);

    int i;
    int x,y;
    for (i = 0; i < m; i++)
    {
        scanf("%d %d", &x, &y);
        x += 1;
        y += 1;
        b[x][y] = 1;
        if (square(x,y))
        {
            printf("%d\n", i+1);
            return 0;
            }

    }

    printf("%d\n", -1);



    return 0;
}
