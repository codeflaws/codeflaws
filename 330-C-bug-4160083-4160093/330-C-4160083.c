#include <stdio.h>
#include <stdlib.h>
#define maxn 100

int main(int argc, char *argv[])
{
    int n;
    int i, j;
    char mat[maxn][maxn];
    int row_e[maxn] = {0};
    int col_e[maxn] = {0};
    int row = 0;
    int col = 0;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
          scanf("%s", &mat[i]);
    }
    
    for(i = 0; i < n; i++)
    {
          for(j = 0; j < n; j++)
          {
                if(mat[i][j] != 'E')
                {
                             break;
                }
          }
          if(j == n)
          {
               row_e[i] = 1;
               row = 1;
          }
    }
    
    for(i = 0; i < n; i++)
    {
          for(j = 0; j < n; j++)
          {
                if(mat[j][i] != 'E')
                {
                             break;
                }
          }
          if(j == n)
          {
               col_e[i] = 1;
               col = 1;
          }
    }
    if(row && col)
    {
           printf("-1\n");
           return 0;
    }
    
    if(row)
           for(i = 0; i < n; i++)
           {
                 for(j = 0; j < n; j++)
                       if(mat[j][i] == '.')
                       {
                                    printf("%d %d\n", j + 1, i + 1);
                                    break;
                       }
           }
    
    
    for(i = 0; i < n; i++)
    {
          for(j = 0; j < n; j++)
                       if(mat[i][j] == '.')
                       {
                                    printf("%d %d\n", i + 1, j + 1);
                                    break;
                       }
           }
    return 0;
}
                       
                      
                      
               
