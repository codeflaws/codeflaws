#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_N (100000)

typedef struct {
  int * xs;
  int cnt, cap;
} list;

int os[MAX_N];
int es[MAX_N];
list ps[MAX_N];

void list_add(list * lst, int x) {
  if ( lst->cnt == lst->cap ) {
    lst->cap += 100;
    lst->xs = realloc(lst->xs, lst->cap * sizeof(int));
  }
  lst->xs[lst->cnt++] = x;
}

int main(int argc, char *argv[]) {
  int i,j,n,k,p,x,e,o,odds,evens;
  bool ok=true;

  scanf("%d %d %d", &n, &k, &p);
  for ( i=odds=evens=0; i < n; ++i ) {
    scanf("%d", &x);
    if ( x % 2 ) os[odds++] = x;
    else es[evens++] = x;
  }
  if ( ((k-p) % 2 != odds % 2) )
    ok = false;
  for ( e=o=0; (e < evens || o < odds) && ok; ) {
    for ( i=0; i < p; ++i ) {
      if ( e < evens )
        list_add(&ps[i], es[e++]);
      else if ( o < odds-1 ) {
        list_add(&ps[i], os[o++]);
        list_add(&ps[i], os[o++]);
      }
    }
    for ( i=p; i < k; ++i ) {
      if ( !ps[i].cnt && o < odds )
        list_add(&ps[i], os[o++]);
      else if ( ps[i].cnt && o < odds-1 ) {
        list_add(&ps[i], os[o++]);
        list_add(&ps[i], os[o++]);
      }
    }
  }
  for ( i=0; i < k; ++i )
    if ( !ps[i].cnt )
      ok = false;
  if ( ok ) {
    printf("YES\n");
    for ( i=0; i < k; ++i ) {
      printf("%d", ps[i].cnt);
      for ( j=0; j < ps[i].cnt; ++j )
        printf(" %d", ps[i].xs[j]);
      printf("\n");
    }
  } else {
    printf("NO\n");
  }
  return EXIT_SUCCESS;
}
