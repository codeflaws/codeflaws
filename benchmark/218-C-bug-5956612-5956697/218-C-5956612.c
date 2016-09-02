#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_N (100)

typedef struct {
  int x, y;
} point;

point ps[MAX_N];
int par[MAX_N];

int set_find(int i) {
  if ( par[i] == i )
    return i;
  return par[i] = set_find(par[i]);
}

void set_union(int i, int j) {
  int pi = set_find(i);
  int pj = set_find(j);

  if ( pi == pj )
    return;
  par[pi] = pj;
}

int main(int argc, char *argv[]) {
  point p;
  int i,j,n,ccs;
  int cnt[MAX_N] = { 0 };

  scanf("%d", &n);
  for ( i=0; i < n; ++i ) {
    scanf("%d %d", &p.x, &p.y);
    ps[i] = p;
  }
  for ( i=0; i < n; ++i )
    par[i] = i;
  for ( i=0; i < n; ++i )
    for ( j=0; j < n; ++j )
      if ( ps[i].x == ps[j].x || ps[i].y == ps[j].y )
        set_union(i, j);
  for ( i=0; i < n; ++i )
    cnt[par[i]] = 1;
  for ( i=ccs=0; i < n; ++i )
    if ( cnt[i] )
      ccs += 1;
  printf("%d\n", ccs-1);
  return EXIT_SUCCESS;
}
