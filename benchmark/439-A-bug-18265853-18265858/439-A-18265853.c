#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n;
int d;
int t[10000];

int main(int argc, char *argv[])
{
  int i, j, k;

  memset(t, 0, sizeof(t));

  scanf("%d %d", &n, &d);
  for (i=0, j=0; i<n; i++) {
    scanf("%d", &t[i]);
    j += t[i];
  }

  k = d - j;
  printf("k : %d\n", k);
  if (/*(k % 5) != 0 ||*/(j + (n-1)*10) > d) {
    printf("-1\n");
    return 0;
  }
  k = d - j - (n-1)*10;
  k /= 5;
  k += (n-1)*2;

  printf("%d\n", k);

  return 0;
}
