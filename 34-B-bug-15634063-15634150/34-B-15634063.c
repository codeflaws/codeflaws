#include<stdio.h>
#include<stdlib.h>
  int compare(const void * a, const void * b) {
  return ( *(int*)a - *(int*)b );
  }
  int main(int argc, char *argv[]) {
  int a[100], m, n, i, sum = 0;
  scanf("%d%d", &n, &m);
  for(i = 0 ; i < n ; i++) 
  scanf("%d", &a[i]);
  qsort(a, n, sizeof(int), compare);
  for(i = 0 ; i < m ; i++)
      sum = sum + -a[i];
  printf("%d", sum);
  return 0;
  } 
  

