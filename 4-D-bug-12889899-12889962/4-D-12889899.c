#include "stdio.h"
#include "stdlib.h"

struct envelope {
  int id, w, h;                                
};

int cmp(const void * first, const void * second) {
  struct envelope* f = (struct envelope*) first;
  struct envelope* s = (struct envelope*) second;
  int sum1 = f->w + f->h;
  int sum2 = s->w + s->h;
  return sum1 - sum2;
}
                           
int main(int argc, char *argv[]) {          
  int n, w, h;
  scanf("%d %d %d", &n, &w, &h);
  struct envelope * envelopes = malloc(sizeof(struct envelope) * n);
  int i;
  for (i = 0; i < n; i++) {
    int foo, bar;
    scanf("%d %d", &foo, &bar);
    envelopes[i].id = i;
    envelopes[i].w = foo;
    envelopes[i].h = bar;
  }
  qsort(envelopes, n, sizeof(struct envelope), cmp);
  int * dp = malloc(sizeof(int) * n);
  int * prev = malloc(sizeof(int) * n);
  int result = -1;
  int from = -1;
  for (i = 0; i < n; i++) {
    if (envelopes[i].w > w && envelopes[i].h > h) {
      int my_max = 0;
      int best_max_id = -1;
      int j;
      for (j = 0; j < i; j++) {
        if (dp[j] > my_max && envelopes[i].w > envelopes[j].w && envelopes[i].h > envelopes[j].h) {
          my_max = dp[j];
          best_max_id = j;
        }
      }
      prev[i] = best_max_id;
      dp[i] = 1 + my_max;
      if (dp[i] > result) {
        result = dp[i];
        from = i;
      }
    }
  }
  int * print_this = malloc(sizeof(int) * n);
  int sz = 0;
  while (from != -1) {
    print_this[sz++] = envelopes[from].id + 1;
    from = prev[from];   
  }
  printf("%d\n", sz);
  for (i = sz - 1; i >= 0; i--) {
    printf("%d ", print_this[i]);
  }
  printf("\n");
  free(print_this);
  free(dp);
  free(prev);
  free(envelopes);
  return 0;
}