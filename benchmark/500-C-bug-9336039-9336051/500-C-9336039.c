#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_N (500)
#define MAX_M (1000)

int ws[MAX_N+1];
int bs[MAX_M];
bool sn[MAX_N+1];

int simulate(int * xs, int n, int m) {
  int i,j,acc,wt;

  for ( i=wt=0; i < m; ++i ) {
    for ( j=0,acc=0; xs[j] != bs[i]; ++j, acc+=ws[xs[j]] );
    wt += acc;
    for ( ; j ; --j ) xs[j] = xs[j-1];
    xs[0] = bs[i];
  }
  return wt;
}

int main(int argc, char *argv[]) {
  int stk[MAX_M];
  int i,bot,n,m;

  scanf("%d %d", &n, &m);
  for ( i=1; i <= n; ++i )
    scanf("%d", ws+i);
  for ( i=0; i < m; ++i )
    scanf("%d", bs+i);
  for ( i=bot=0; i < m; ++i )
    if ( !sn[bs[i]] )
      sn[bs[i]]=true, stk[bot++]=bs[i];
  printf("%d\n", simulate(stk, bot, m));
  return EXIT_SUCCESS;
}
