#include <stdio.h>
#include <stdlib.h>

#define LLD "%lld"

int main(int argc, char *argv[]) {
  int i, n;
  long long res = 0;
  scanf("%d\n", &n);
  for (i = 0; i < n; ++i)
    res |= (getchar() == 'B') << i;
  printf(LLD"\n", res);
  exit(EXIT_SUCCESS);
return 0;
}
