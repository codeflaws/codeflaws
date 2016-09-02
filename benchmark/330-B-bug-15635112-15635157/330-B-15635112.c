#include<stdio.h>
  int main(int argc, char *argv[]) {
  int n, m, a[3000], b[3000], i, j, h[3000] = {0};
  scanf("%d%d", &n, &m);
  for(i = 0; i < m ; i++) { 
      scanf("%d%d", &a[i], &b[i]);
      ++h[a[i]];
      ++h[b[i]];
  }
  for(i = 1 ; i <= n ; i++)
      if(h[i-1])
          break;
  printf("%d\n",n-1);
  for(j = 1 ; j <= n ; j++) 
      if(i != j)
      printf("%d %d\n", i, j);
  return 0;
  } 

