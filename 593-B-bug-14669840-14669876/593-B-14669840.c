#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
struct line {
  int64_t k;
  int64_t b;
  int64_t y1;
  int64_t y2;
};
int linecmp(const void* a, const void* b)
{
  struct line* c = (struct line*) a;
  struct line* d = (struct line*) b;
  if (c->y1 == d->y1) {
    return (c->y2 > d->y2) - (c->y2 < d->y2);
  } else {
    return (c->y1 > d->y1) - (c->y1 < d->y1);
  }
}

int main(int argc, char *argv[])
{
  uint32_t n;
  scanf("%"SCNu32, &n);
  int64_t x1, x2;
  scanf("%"SCNd64" %"SCNd64, &x1, &x2);
  struct line lines[100000];
  int32_t i;
  for (i = 0; i < n; i++) {
    scanf("%"SCNd64" %"SCNd64, &lines[i].k, &lines[i].b);
    lines[i].y1 = lines[i].k * x1 + lines[i].b;
    lines[i].y2 = lines[i].k * x2 + lines[i].b;
  }
  qsort(lines, n, sizeof(struct line), linecmp);
 struct line* last = &lines[0];
 for (i = 0; i < n; i++) {
   if (lines[i].y1 == last->y1) { continue; }
   if (lines[i].y2 < last->y2) {
     printf("YES\n");
     return 0;
   }
   last = &lines[i];
 }
 printf("NO\n");
 return 0;
}

