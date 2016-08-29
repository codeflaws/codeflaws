#include<stdio.h>
  int main(int argc, char *argv[]) {
  int sum, limit, arr[1000000], i, k = 0, j;
  scanf("%d %d", &sum, &limit);
  for(i = 1 ; sum && i <= limit ; i <<= 1) {
      for(j = i ; j <= limit ; j += i*2) {
          if(sum)
              if(sum&j || j+i*2 <= limit) {
                  arr[k++] = j;  
                  sum -= i; 
               }
      }
  }
  if(sum)
      printf("-1");
  else {
      printf("%d\n",k); 
      for(i = 0 ; i < k ; i++)
          printf("%d ",arr[i]);
  }  
  return 0;
  }
