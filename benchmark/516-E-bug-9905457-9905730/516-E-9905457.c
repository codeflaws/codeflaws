#include<stdio.h>
#include<stdlib.h>

#define MAXN 200000

int b[MAXN], g[MAXN];

int n,m, B,G;

int gcd(int a, int b)
{
  int c;

  while(b){
    c = a%b;
    a = b;
    b = c;
  }

  return a;
}

void swap(long long *a, long long *b)
{long long tmp; tmp = *a; *a = *b; *b = tmp;}

long long inverse(long long x, long long mod)
{
  long long a1, b1, d1, a2, b2, d2;

  a1=1; b1=0; d1=x;
  a2=0; b2=1; d2=mod;

  while(d1 > 1){
    a2 -= a1*(d2/d1);
    b2 -= b1*(d2/d1);
    d2 -= d1*(d2/d1);
    swap(&a1, &a2);
    swap(&b1, &b2);
    swap(&d1, &d2);
  }

  a1 %= mod;
  if(a1 < 0) a1 += mod;
  return a1;
}

struct item_t{
  long long pos;
  int delay;
  int type;
  char initial;
} item[MAXN];
typedef struct item_t item_t;

int item_cmp(const void *A, const void *B)
{
  item_t *a = (item_t *)A, *b = (item_t *)B;

  if(a->type != b->type) return a->type - b->type;
  else return a->pos - b->pos;
}

int item_num;
int jump, size;
int jump_delay;
int d;

long long cover()
{
  int inv, i;
  int first;
  long long t, maxt;

  jump %= size;

  for(i=0; i<item_num; i++){
    item[i].pos %= size;
    item[i].type = item[i].pos % d;
    item[i].pos /= d;
  }
  jump /= d;
  size /= d;

  if(jump){
    inv = inverse(jump, size);
    //    printf("%d^-1 (mod %d) = %d\n", jump, size, inv);
    for(i=0; i<item_num; i++){
      item[i].pos *= inv;
      item[i].pos %= size;
    }
  }
  qsort(item, item_num, sizeof(item_t), item_cmp);

  maxt = 0;
  for(i=0; i<item_num; i++){
    if(i+1 == item_num || item[i+1].type != item[i].type){
      if(i+1 == item_num){ if(item[i].type+1 != d) return -1; }
      else if(item[i+1].type != item[i].type+1) return -1;

      t = size+item[first].pos-item[i].pos-1;
      first = i+1;
    }
    else{
      if(item[i+1].pos == item[i].pos){
	if(item[i].initial) item[i+1].initial = 1;
	if(item[i].delay < item[i+1].delay) item[i+1].delay = item[i].delay;
	continue;
      }
      t = item[i+1].pos-item[i].pos-1;
    }
    if(!t && item[i].initial) continue;
    t *= jump_delay;
    t += item[i].delay;
    if(maxt < t) maxt = t;
  }

  return maxt;
}

void init(int iboys)
{
  int i;

  item_num = 0;
  for(i=0; i<B; i++){
    item[item_num].pos = b[i];
    item[item_num].delay = b[i];
    item[item_num].initial = iboys;
    item_num++;
  }
  for(i=0; i<G; i++){
    item[item_num].pos = g[i];
    item[item_num].delay = g[i];
    item[item_num].initial = !iboys;
    item_num++;
  }
}

int main(int argc, char *argv[])
{
  int i;
  long long result1, result2;

  scanf("%d %d\n", &n, &m);
  scanf("%d", &B);
  for(i=0; i<B; i++)
    scanf("%d", b+i);
  scanf("%d", &G);
  for(i=0; i<G; i++)
    scanf("%d", g+i);
  d = gcd(n,m);

  size = n;
  jump_delay = jump = m;
  init(1);
  result1 = cover();
  //printf("result = %d\n", result1);

  size = m;
  jump_delay = jump = n;
  init(0);
  result2 = cover();

  if(result1 < 0 || result2 < 0) printf("-1\n");
  else if(result1 < result2) printf("%lld\n", result2);
  else printf("%lld\n", result1);

  //printf("r1 = %d, r2 = %d\n", result1, result2);

  return 0;
}
