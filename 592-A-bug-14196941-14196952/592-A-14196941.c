#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int findWayUp(int a[8][8], int, int);
int findWayDown(int a[8][8], int, int);

int findWayUp(int a[8][8], int currI, int currJ)
{
    int result = 0;
    if (currI == 0) result = 1;
    else
    {
        if (a[currI-1][currJ] == 0) result = 1 * findWayUp(a, currI-1, currJ);
        else result = 0;
    }
    return result;
}

int findWayDown(int a[8][8], int currI, int currJ)
{
    int result = 0;
    if (currI == 7) result = 1;
    else
    {
        if (a[currI+1][currJ] == 0) result = 1 * findWayDown(a, currI+1, currJ);
        else result = 0;
    }
    return result;
}

int main(int argc, char *argv[])
{
    int board[8][8];
    char ch;
    
    for (int i = 0; i < 8; i++)
    { 
        for (int j = 0; j < 8; j++)
        {
            scanf("%c", &ch);
            switch (ch)
            {
                case '.': 
                    board[i][j] = 0;
                    break;
                    
                case 'W':
                    board[i][j] = 1;
                    break;
                    
                case 'B':
                    board[i][j] = 2;
                    break;
            }
        }
       scanf("%*c");
    }
    
    int movesA = 0, movesB = 0;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
        {
            if (board[i][j] == 1) 
                if (findWayUp(board, i, j)) 
                    if ((movesA == 0) || (i < movesA)) movesA = i;
            if (board[i][j] == 2)
                if (findWayDown(board, i, j))
                    if ((movesB == 0) || ((7-i) < movesB)) movesB = 7-i;  
        }
    char winner;
    if (movesA < movesB) winner = 'A';
    else winner = 'B';
    printf("%c", winner);
    
    return 0;
}