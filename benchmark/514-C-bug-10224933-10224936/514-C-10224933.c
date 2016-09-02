#include <stdio.h>

long long const M1 = 999999937;
long long const M2 = 104857601;
long long const X = 33533;

void sort(long long * a, long long * b) {
  if (a + 1 >= b) return;
  long long * i = a;
  long long * j = b - 1;
  long long x = a[(b - a) * 2 / 7];
  while (i <= j) {
    while (*i < x) ++i;
    while (*j > x) --j;
    if (i <= j) {    
      long long tmp = *i;
      *i = *j;
      *j = tmp;
      ++i;
      --j;
    }
  }
  sort(a, j + 1);
  sort(i, b);
}

long long h[555555];
int s[555555];

int main(int argc, char *argv[]) {
  int n, m;
  scanf("%d%d", &n, &m);
  int i;
  for (i = 0; i < n; i++) {
    int c = getchar();
    while (c <= 32) c = getchar();
    long long h1 = 0;
    long long h2 = 0;
    while (c > 32) {
      h1 = (h1 * X + c) % M1;
      h2 = (h2 * X + c) % M2;
      c = getchar();
    }
    h[i] = (h1 << 32) | h2;
    h[i] &= 0xFF;
  }  
//  for (i = 0; i < n; i++) printf("%I64d ", h[i]); puts("");
  sort(h, h + n);
//  for (i = 0; i < n; i++) printf("%I64d ", h[i]); puts("");
  for (i = 0; i + 1 < n; i++) if (h[i] > h[i + 1]) {
    puts("bad");
    return 1;
  }
  for (i = 0; i < m; i++) {
    int c = getchar();
    while (c <= 32) c = getchar();
    int len = 0;
    long long h1 = 0;
    long long h2 = 0;
    while (c > 32) {
      h1 = (h1 * X + c) % M1;
      h2 = (h2 * X + c) % M2;
      s[len++] = c;
      c = getchar();
    }
    int j;
    long long p1 = 1;
    long long p2 = 1;
    int ans = 0;
    for (j = len - 1; j >= 0; j--) {
      int let;
      for (let = 'a'; let <= 'c'; let++) {
        if (let == s[j]) continue;
        long long ch1 = (h1 + p1 * (let - s[j]) + M1 * M1) % M1;
        long long ch2 = (h2 + p2 * (let - s[j]) + M2 * M2) % M2;
        long long ch = (ch1 << 32) | ch2;
        int l = -1;
        int r = n;
        while (l < r - 1) {
          int mid = (l + r) / 2;
          if (h[mid] > ch) r = mid; else l = mid;
        }
        if (l >= 0 && h[l] == ch) {
          ans = 1;
          j = -1;
          break;
        }
      }
      p1 = p1 * X % M1;
      p2 = p2 * X % M2;
    }
    if (ans) puts("YES"); else puts("NO");
  }
  return 0;
}
