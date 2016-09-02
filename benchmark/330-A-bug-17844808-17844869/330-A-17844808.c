#include <stdio.h>
int main(int argc, char *argv[])
{
    int r, c, i, j, row=0, d, col=0;
    char a[11][11];
    scanf("%d %d", &r, &c);
    for(i=0; i<r; i++)
        scanf("%s", &a[i]);
    for(i=0; i<r; i++)
    {
        d=0;
        for(j=0; j<c; j++)
        {
            //printf("a[%d][%d]=%c\n", i, j, a[i][j]);
            if(a[i][j]=='S')
            {
                d=1;
                break;
            }
        }
        if(d==0)
        {
            row++;
        }
    }
    for(i=0; i<c; i++)
    {
        d=0; 
        for(j=0; j<r; j++)
        {
            if(a[i][j]=='S')
            {
                d=1;
                break;
            }
        }
        if(d==0)
        {
            col++;
        }
    }
    //printf("row=%d, col=%d\n", row, col);
    printf("%d\n", r*col+c*row-row*col);
    return 0;
}