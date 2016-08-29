#include <stdbool.h>
#include <stdio.h>
#define min(a,b) (a<b) ? a:b;

typedef struct Pair Pair;
struct Pair
{
    int two;
    int five;
};

char ans[2010];
int board[1010][1010];
Pair twoMin[1010][1010];
Pair fiveMin[1010][1010];
int twoWay[1010][1010];
int fiveWay[1010][1010];

int twoNum(int n)
{
    int count=0;
    while (!(n&1))
    {
        n=n>>1;
        count++;
    }
    return count;
}

int fiveNum(int n)
{
    int count=0;
    while (!(n%5))
    {
        n=n/5;
        count++;
    }
    return count;
}

int main(int argc, char *argv[])
{
    int i,j,n,x,y,pos,fiveWayZero,twoWayZero,zeroX,zeroY;
    scanf("%d",&n);
    zeroX=-1; zeroY=-1;
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
        {
            scanf("%d",&board[i][j]);
            if (!board[i][j])
            {
                zeroX=i;
                zeroY=j;
                board[i][j]=board[i][j]+10;
            }
        }
    twoMin[0][0].two=twoNum(board[0][0]);
    twoMin[0][0].five=fiveNum(board[0][0]);
    fiveMin[0][0].two=twoNum(board[0][0]);
    fiveMin[0][0].two=fiveNum(board[0][0]);
    for (i=1;i<n;i++)
    {
        twoMin[0][i].two=twoMin[0][i-1].two+twoNum(board[0][i]);
        twoMin[0][i].five=twoMin[0][i-1].five+fiveNum(board[0][i]);
        twoWay[0][i]=0;
        fiveMin[0][i].two=fiveMin[0][i-1].two+twoNum(board[0][i]);
        fiveMin[0][i].five=fiveMin[0][i-1].five+fiveNum(board[0][i]);
        fiveWay[0][i]=0;
        twoMin[i][0].two=twoMin[i-1][0].two+twoNum(board[i][0]);
        twoMin[i][0].five=twoMin[i-1][0].five+fiveNum(board[i][0]);
        twoWay[i][0]=1;
        fiveMin[i][0].two=fiveMin[i-1][0].two+twoNum(board[i][0]);
        fiveMin[i][0].five=fiveMin[i-1][0].five+fiveNum(board[i][0]);
        fiveWay[i][0]=1;
    }
    for (i=1;i<n;i++)
        for (j=1;j<n;j++)
        {
            if (twoMin[i][j-1].two<twoMin[i-1][j].two)
            {
                twoMin[i][j].two=twoMin[i][j-1].two+twoNum(board[i][j]);
                twoMin[i][j].five=twoMin[i][j-1].five+fiveNum(board[i][j]);
                twoWay[i][j]=0;
            }
            else
            {
                twoMin[i][j].two=twoMin[i-1][j].two+twoNum(board[i][j]);
                twoMin[i][j].five=twoMin[i-1][j].five+fiveNum(board[i][j]);
                twoWay[i][j]=1;
            }
            if (fiveMin[i][j-1].five<fiveMin[i-1][j].five)
            {
                fiveMin[i][j].two=fiveMin[i][j-1].two+twoNum(board[i][j]);
                fiveMin[i][j].five=fiveMin[i][j-1].five+fiveNum(board[i][j]);
                fiveWay[i][j]=0;
            }
            else
            {
                fiveMin[i][j].two=fiveMin[i-1][j].two+twoNum(board[i][j]);
                fiveMin[i][j].five=fiveMin[i-1][j].five+fiveNum(board[i][j]);
                fiveWay[i][j]=1;
            }
        }
    x=n-1; y=n-1; pos=0;
    twoWayZero=min(twoMin[n-1][n-1].two,twoMin[n-1][n-1].five);
    fiveWayZero=min(fiveMin[n-1][n-1].two,fiveMin[n-1][n-1].five);
    if (twoWayZero<fiveWayZero)
    {
        while (x||y)
        {
            if (twoWay[x][y])
            {
                ans[pos++]='D';
                x--;
            }
            else
            {
                ans[pos++]='R';
                y--;
            }
        }
    }
    else
    {
        while (x||y)
        {
            if (fiveWay[x][y])
            {
                ans[pos++]='D';
                x--;
            }
            else
            {
                ans[pos++]='R';
                y--;
            }
        }
    }
    int num=min(twoWayZero,fiveWayZero);
    if (num && zeroX!=-1)
    {
        printf("1\n");
        for (i=0;i<zeroX;i++)
            printf("D");
        for (i=1;i<n;i++)
            printf("R");
        for (i=zeroX+1;i<n;i++)
            printf("D");
        printf("\n");
    }
    else
    {
        printf("%d\n",num);
        for (i=pos-1;i>=0;i--)
            printf("%c",ans[i]);
        printf("\n");
    }
}
