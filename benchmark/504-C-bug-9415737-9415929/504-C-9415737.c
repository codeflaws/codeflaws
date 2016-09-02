#include<stdio.h>

#define MAXN 100000

long long N;
int a[MAXN];

int freq[MAXN+1];

void count_freq()
{
  int i, j;

  for(i=0; i<N+1; i++) freq[i] = 0;
  for(i=0; i<N; i++){
    if(i < N-1-i) freq[a[i]]++;
    else if(N-1-i < i) freq[a[i]]--;
  }
  /*
  printf("countfreq:", i);
  for(j=0; j<N+1; j++) printf(" %d", freq[j]);
  printf("\n");
  */
}

int count_last(int start)
{
  int i, j;
  int neg = 0;
  char wasneg;

  neg = 0;
  for(i=0; i<N+1; i++) if(freq[i] < 0) neg++;

  for(i=N/2;; i++){
    /*
    printf("%d freq:", i);
    for(j=0; j<N+1; j++) printf(" %d", freq[j]);
    printf("\n%d list:", i);
    for(j=0; j<N; j++) printf(" %d", a[j]);
    printf("\n");
    */

    if(freq[a[i]] < 0) wasneg = 1;
    else wasneg = 0;

    if(N-1-i < i) freq[a[i]] += 2;
    else freq[a[i]]++;

    if(wasneg && freq[a[i]] >= 0){
      neg--;
      if(!neg) break;
    }
  }
  //printf("last = %d\n", i);

  return i;
}

void flip_a()
{
  int i, tmp;

  for(i=0; i<N-1-i; i++){
    tmp = a[i];
    a[i] = a[N-1-i];
    a[N-1-i] = tmp;
  }
}

long long count()
{
  int i, odd;
  long long start, last1, last2;
  long long result;

  for(i=0; i<N && a[i] == a[N-1-i]; i++);
  if(i == N) return N*(N+1)/2;
  start = i;

  result = (start+1)*(start+1);

  count_freq();
  for(i=0; i<N+1 && !freq[i]; i++);
  if(i == N+1){
    last1 = start;
    for(i=start; i < N-1-i; i++)
      if(a[i] == a[N-1-i]) last1 = start;
    last2 = last1;
  }
  else{
    odd = 0;
    if(N%2 == 1) freq[a[N/2]]++;
    for(i=0; i<N+1; i++) if(freq[i]%2) odd++;
    if(odd > 1 || (odd > 0 && N % 2 == 0)) return 0;
    if(N%2 == 1) freq[a[N/2]]--;

    last1 = count_last(start);
    flip_a();
    count_freq();
    last2 = count_last(start);
  }

  result += (start+1)*(N-last1-start-1);
  result += (start+1)*(N-last2-start-1);

  return result;
}

int main(int argc, char *argv[])
{
  int i,j,first,last;

  scanf("%d\n", &N);
  for(i=0; i<N; i++) scanf("%d", a+i);
  printf("%I64d\n", count());

  return 0;
}
