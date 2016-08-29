#include<stdio.h>
  int main(int argc, char *argv[]) {
  int d, st, a[50], b[50], i, j, min = 0, max = 0, ex;
  scanf("%d%d", &d, &st);
  for(i = 0 ; i < d ; i++) {
      scanf("%d%d", &a[i], &b[i]);
      min = min + a[i];
      max = max + b[i];
  }
  if(st < min || st > max) 
      printf("NO");
  else {
      ex = st - min;
      printf("YES\n"); 
      for(i = 0 ; i < d ; i++) 
           if(ex && ex > b[i] - a[i]) {
               printf("%d\n", b[i]);
               ex = ex - (b[i] - a[i]); 
           }
           else if(ex && ex < b[i] - a[i] ) {
               printf("%d\n", a[i]+ex);
               ex = 0;
           }
           else
               printf("%d\n",a[i]);    
  }
  return 0;
  }
