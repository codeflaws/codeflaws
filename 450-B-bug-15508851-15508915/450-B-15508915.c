#include<stdio.h>
  int main(int argc, char *argv[]) {
  long int x, y, i = 1;
  long long int fn, n;
  scanf("%ld%ld%lld", &x, &y, &n);
  n = n % 6 != 0?n % 6: 6; 
  while(i <= n) {
     if(i == 1)
        fn = x;
     else if(i == 2)
        fn = y;
     else {
        fn = y - x;
        x = y;
        y = fn;
     }
     i++;
  }
  while(fn < 0) {
  if(fn < 0)
  fn = fn + 1000000007;
  }
  printf("%lld",fn%1000000007);
  return 0;    
  }

