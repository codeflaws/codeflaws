#include <stdio.h>
#include <stdlib.h>

#define MAX_N (1000000)

int xs[MAX_N+1];

int main(int argc, char *argv[]) {
  int i,n,x,p;

  for ( i=1; i <= MAX_N; ++i )
    xs[i] = xs[i-1] ^ i;
  scanf("%d", &n);
  for ( i=p=0; i < n; ++i )
    scanf("%d", &x), p ^= x;
  for ( i=1; i <= n; ++i )
    p ^= (((n/i)%2) * xs[i]) ^ xs[n%i];
  printf("%d\n", p);
  return EXIT_SUCCESS;
}
