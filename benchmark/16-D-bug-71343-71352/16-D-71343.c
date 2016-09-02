#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

#define N 112

int a[N];

int gett( )
{
  char s[1000], c;
  int x, y;
  gets( s );
  sscanf( s, "[%d:%d ", &x, &y );
//printf( "%d %d\n", x, y );
  c = s[7];
  if (x!=12)
  {
    if (c=='p') x += 12;
    return( x*100+y );
  }
  if (c=='a') x-=12;
  return(x*100+y);
}
  

int main(int argc, char *argv[])
{
/*
  freopen( "input.dat", "r", stdin );
*/
  int i, o, p, j, k, n, m;
  char s[100];
  scanf( "%d", &n ); gets( s );
  p = 1; k = 0;
  for (i=0;i<n;++i)
  {
    a[i] = gett();
printf( " time %d %d\n", a[i], k );
    if (i>=1)
    {
      if (a[i]>a[i-1]) {k=0;continue;}
      if (a[i]<a[i-1])
      {
        ++p; k = 0;
        continue;
      }
      if (a[i]==a[i-1])
      {
        if (k<9)
        {
          ++k; continue;
        }
        else
        {
          k = 0; p++;
        }
      }
    }
  }
  printf( "%d\n", p );
  return 0;
} 


