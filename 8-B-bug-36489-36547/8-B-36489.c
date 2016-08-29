#include<stdio.h>
#define M 312

int dir[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
int a[M][M];

int main(int argc, char *argv[])
{
//  freopen( "input.dat", "r", stdin );
  
  int i, o, p, j, k, l;

  for (i=0;i<M;++i)
    for (j=0;j<M;++j) 
      a[i][j] = 0;

  char c;
  int sx = 150, sy = 150;
  a[sx][sy] = 1;
  int num = 1;
  while( scanf( "%c", &c ) != EOF )
  {
    int x, y;
    if (c=='U') c = 0;
    if (c=='D') c = 3;
    if (c=='L') c = 2;
    if (c=='R') c = 1;
    if (c<=3)
    {
      sx += dir[c][0];
      sy += dir[c][1];
      ++num;
      a[sx][sy] = num;
      for (i = 0;i<4;++i) 
      {
        x = sx + dir[i][0];
        y = sy + dir[i][1];
        if ((a[x][y] < num-1) && (a[x][y]!=0)) 
        {
          printf( "BUG\n" );
          return(0);
        }
      }
    } else break;
  }
  printf( "OK\n" );
  return 0;
}
    
