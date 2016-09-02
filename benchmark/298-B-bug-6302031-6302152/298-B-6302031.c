#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x1, y1, x2, y2,n, i , j , time =0;
    char way[100];
    scanf("%d%d%d%d%d",&n,&x1,&y1,&x2,&y2);
    scanf("%s",way);
    for (i=0; i<n; i++)
    {
        if(way[i]=='E')
        {
            x1 +=1;
            if (x1>x2)
            {
                x1--;
                time++;
            }
            else if (x1<=x2)
            {
                time++;
            }
        }
        else if (way[i]=='S')
        {
            y1-=1;
            if (y1<y2)
            {
                y1++;
                time++;
            }
            else if (y1>=y2)
            {
                time++;
            }
        }
        else if (way[i]=='W')
        {
            x1-=1;
             if (x1<x2)
            {
                x1++;
                time++;
            }
            else if (x1>=x2)
            {
                time++;
            }
        }
        else if (way[i]=='N')
        {
            y1+=1;
            if (y1>y2)
            {
                y1--;
                time++;
            }
            else if (y1<=y2)
            {
                time++;
            }
        }
        if ((x1==x2)&&(y1==y2))
        {
            break;
        }
    }
    if ((x1==x2)&&(y1==y2))
    {
        printf("%d",time);
    }
    else
        printf("-1");
    return 0;
}
