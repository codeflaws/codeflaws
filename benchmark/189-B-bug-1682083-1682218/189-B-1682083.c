#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

typedef long long ll;

void func(int w, int h) {
  ll ans = 0, i, j, k, t;
  for (i = 1; i < w; i ++) {
    for (j = 1; j < h; j ++) {
      k = i;
      k = MIN(k, w - i);
      t = j;
      k = MIN(k, h - j);
      ans += k * t;
    }
  }
  printf("%lld\n", ans);
}

int main(int argc, char *argv[]) {
  int w, h;
  while (scanf("%d%d", &w, &h) == 2) {
    func(w, h);
  }
  return 0;
}
