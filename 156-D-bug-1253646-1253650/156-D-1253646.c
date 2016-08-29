#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct dsu {
  int n;
  int *p, *c;
};

struct dsu *dsu_new(int n) {
  int i;
  struct dsu *dsu = malloc(sizeof(struct dsu));
  dsu->n = n;
  dsu->p = malloc(sizeof(int) * n);
  dsu->c = malloc(sizeof(int) * n);
  memset(dsu->p, -1, sizeof(int) * n);
  for (i = 0; i < n; i++)
    dsu->c[i] = 1;
  return dsu;
}

void dsu_free(struct dsu *dsu) {
  free(dsu->p);
  free(dsu->c);
  free(dsu);
}

int dsu_find(struct dsu *dsu, int x) {
  return dsu->p[x] == -1 ? x : (dsu->p[x] = dsu_find(dsu, dsu->p[x]));
}

void dsu_merge(struct dsu *dsu, int x, int y) {
  x = dsu_find(dsu, x);
  y = dsu_find(dsu, y);
  if (x != y) {
    dsu->p[x] = y;
    dsu->c[y] += dsu->c[x];
  }
}

int main(int argc, char *argv[]) {
  int n, m, q;
  int u, v, i, k;
  struct dsu *dsu;
  long long ans;

  while (scanf("%d %d %d", &n, &m, &q) != EOF) {
    dsu = dsu_new(n);
    while (m--) {
      scanf("%d %d", &u, &v);
      u--; v--;
      dsu_merge(dsu, u, v);
    }
    ans = 1 % q;
    k = 0;
    for (i = 0; i < n; i++)
      if (dsu->p[i] == -1) {
        ans = ans * dsu->c[i] % q;
        k++;
      }
    for (i = 0; i < k - 2; i++)
      ans = ans * n % q;
    dsu_free(dsu);
    printf("%d\n", (int)ans);
  }
  return 0;
}
