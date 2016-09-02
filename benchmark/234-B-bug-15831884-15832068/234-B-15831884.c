#include<stdio.h>
#include<stdlib.h>
  void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
  }
  int compare (const void * a, const void * b) {
  return ( *(int*)a - *(int*)b );
  }

  int main(int argc, char *argv[]) {
  int n, k, a[1000], i, ind[1000], j, p;
  scanf("%d %d", &n, &p);
  for(i = 0 ; i < n ; i++) {
      scanf("%d", &a[i]);
      ind[i] = i+1;
  }
  for(i = 0 ; i < n-1 ; i++) {
      k = i;
      for(j = i+1 ; j < n ; j++) 
          if(a[k] < a[j])
              k = j;  
      swap(&a[i], &a[k]);
      swap(&ind[i], &ind[k]);   
  }
  printf("%d\n",a[p-1]);
  qsort(ind, p, 4, compare);
  for(i = 0 ; i < p ; i++)
      printf("%d ", ind[i]);
  return 0;
  }
