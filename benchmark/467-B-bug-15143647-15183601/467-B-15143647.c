#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  int n, m, k, i, j;
  int *a = malloc(sizeof(int) * (m+1));
  scanf("%d %d %d", &n, &m, &k);
  for(i = 0; i < m+1; i++){
    scanf("%d", (a+i));
  }
  int mask, t = 0;
  for(i = m-1; i >= 0; i--){
    int count = 0;
    mask = *(a+m) ^ *(a+i);
    for(j = 0; j < 32; j++){
      count += (mask >> j) & 1;
    }
    if(count <= k)  t++;
  }
  printf("%d\n", t);
return 0;
}
