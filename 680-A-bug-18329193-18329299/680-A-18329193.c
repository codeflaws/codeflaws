#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define pi 3.1415926
#define rep(x,ini,end) for(x=(ini);x<(end);x++)
#define per(x,ini,end) for(x=(end-1);x>=(ini);x--)
#define max(x,y) ((x)>(y)?(x):(y))
#define min(x,y) ((x)<(y)?(x):(y))

int a[5] = {0};

void quickSort(int a[], int beginPos, int endPos)
{
    int i = beginPos, j = endPos;
    int flag = a[beginPos];
    //int bePos_L, bePos_R, endPos_L, endPos_R;
    //int countL = 0, countR = 0;
    if (beginPos>=endPos)
    {
        return;
    }

    while (i<j)
    {
        while ((a[j]>flag) && (i<j))
        {
            --j;
        }
        if (i == j)
        {
            break;
        }

        a[i] = a[j]; a[j] = flag;
        ++i;

        while ((a[i]<flag) && (i<j))
        {
            ++i;
        }
        if (i == j)
        {
            break;
        }

        a[j] = a[i]; a[i] = flag;
        --j;
    }

    quickSort(a, beginPos, i-1);
    quickSort(a, i+1, endPos);
}

int main(int argc, char *argv[])
{
    int i;
    int sum = 0;
    rep(i,0,5)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    quickSort(a,0,4);
    int maxSum = 0, temp = -1, flag = 0, count = 0;
    rep(i,0,5)
    {
        if (a[i] == temp)
        {
            if (flag < 3)
            {
                flag++; count = 1; continue;
            }
        }
        else
        {
            if (flag>1)
            {
                maxSum = max(maxSum, temp*flag);
                temp = a[i]; flag = 1; continue;
            }
            else
            {
                temp = a[i];
            }
        }
    }
    if (flag>1)
    {
        maxSum = max(maxSum, temp*flag);
    }

    int results;
    if (count!=0)
    {
        if (maxSum!=0)
        {
            results = sum - maxSum;
        }
        else
        {
            results = sum - temp * 3;
        }
    }
    else
    {
        results = sum;
    }

    printf("%d", results);

    return 0;
}
