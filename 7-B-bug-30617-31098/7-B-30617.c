#include<stdio.h>
#define N 105

int a[N];

int main(int argc, char *argv[])
{
  int i, o, p, j, k, n, m, num=0;
  char s[100];

//  freopen( "input.dat", "r", stdin );

  scanf( "%d %d", &n, &m );

  for (i=1;i<=m;++i) a[i] = 0;

  int xx;
  for (xx=0;xx<n;++xx )
  {
    scanf( "%s", s );
    if (s[0] == 'a' )
    {
      scanf( "%d", &p );
      k = 0;
      for (i=1;i<=m;++i)
      {
        if (a[i] == 0) ++k; else k = 0;
        if (k==p) break;
      }
      if (k==p)
      {
        ++num;
        for (;p>0;--p,--i) a[i] = num;
        printf( "%d\n", num );
      } else printf( "NULL\n" );
    } else
    if (s[0] == 'e')
    {
      scanf( "%d", &p );
      k = 0;
      for (i=1;i<=m;++i)
        if (a[i] == p) {a[i] = 0; k = 1;}
      if (k==0)
        printf( "ILLEGAL_ERASE_ARGUMENT\n" );
    } else
    if (s[0] == 'd')
    {
      for (i=1,j=1;i<=m;++i)
      {
        if (a[j] == 0)
        {
          if (a[i] != 0)
          {
            a[j] = a[i]; a[i] = 0; ++j;
          }
        } else
        {
          ++j;
        }
      }
    }
  }
  return 0;
}
      
