#include <stdio.h>
#include <stdlib.h>

#define N 100000
#define M 1000000

int d[N], id[N], n, m, k, maxd;
int from[M], to[M];
int count[N], start[N];

int check_bad(void) {
  int i, ret;
  for (i = 0; i < n; ++i)
    ++count[d[i]];
  ret = count[0] != 1 || count[1] > k;
  for (i = 2; i <= maxd; ++i) {
    ret |= count[i] > (long long)k*count[i - 1];
  }
  return ret;
}

void sort(int l, int r) {
  int i = l, j = r, p = d[l], tmp;
  while (i <= j) {
    while (d[i] < p) ++i;
    while (p < d[j]) --j;
    if (i <= j) {
      tmp = d[i]; d[i] = d[j]; d[j] = tmp;
      tmp = id[i]; id[i] = id[j]; id[j] = tmp;
      ++i; --j;
    }
  }
  if (i < r) sort(i, r);
  if (l < j) sort(l, j);
}

int main(int argc, char *argv[]) {
  int bad, i, j;

  scanf("%d %d", &n, &k);
  for (i = 0; i < n; ++i) {
    scanf("%d", &d[i]);
    id[i] = i + 1;
  }
  sort(0, n - 1);
  maxd = d[n - 1];

  bad = check_bad();
  if (bad) { m = -1; goto out; }

  for (i = n - 1; i >= 0; --i)
    start[d[i]] = i;
  for (i = 0; i < maxd; ++i) {
    for (j = start[i + 1]; j < n && d[j] == d[start[i]] + 1; ++j) {
      int off = (j - start[i + 1]) / (i == 0 ? k : k - 1);
      from[m] = id[start[i] + off];
      to[m] = id[j];
      ++m;
    }
  }

  out:
  printf("%d\n", m);
  for (i = 0; i < m; ++i)
    printf("%d %d\n", from[i], to[i]);
  exit(EXIT_SUCCESS);
}
