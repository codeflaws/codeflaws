#include <stdio.h>
#include <stdlib.h>

const int MAXN = 101;

int main(int argc, char *argv[]) {
  int N;
  scanf("%d", &N);
  int ar[N];
  int i, k, j;
  for (i = 0; i < N; ++i) {
    scanf("%d", ar + i);
  }

  for(i = 0; i < N; ++i) {
    for(k = 0; k < N; ++k) {
      for(j = 0; j < N; ++j) {
        if(ar[i] + ar[j] == ar[k]) {
          printf("%d %d %d\n", k + 1, i + 1, j + 1);
          return 0;
        }
      }
    }
  }
  printf("-1\n");
  return 0;
}
