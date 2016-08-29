#include <stdio.h>
#include <string.h>

#define SUM(N) (N * (N + 1) / 2)
#define MAXN (6 * 1000 + 1)
#define MAXS SUM(MAXN)
char p[MAXS];
char c[MAXN];

int main(int argc, char *argv[]) {
  int N, S, i, j;

  scanf("%d", &N);
  S = SUM(N);

  p[2] = 1;
  for (i = 3; i <= S; i += 2) p[i] = 1;
  for (i = 2; i*i <= S; ++i) if(p[i]) for (j = i*i; j <= S; j += 2*i) p[j] = 0;

  memset(c, '1', sizeof c);
  if (p[S-2]) {
    c[2] = '2';
  } else if (S % 2) {
    c[1] = c[2] = '2', S -= 3;
    for (i = 3; ; i++) if (p[i] && p[S - i]) {
      c[i] = '3';
      break;
    }
  }
  else for (i = 3; ; i++) if (p[i] && p[S - i]) {
    c[i] = '2';
    break;
  }

  for (i = 1; i <= N; i++) printf("%c%c", c[i], i == N? '\n' : ' ');

  return 0;
}
