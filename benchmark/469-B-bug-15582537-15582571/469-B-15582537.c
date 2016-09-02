#include<stdio.h>
  int main(int argc, char *argv[]) {
  int p, q, l, r, a1[1003] = {0}, b1[1003] = {0}, res[1003] = {0};
  int i, j, c[50], d[50], l1, e1, sum = 0;
  scanf("%d%d%d%d", &p, &q, &l, &r);
  for(i = 0 ; i < p ; i++) {
      scanf("%d%d", &c[i], &d[i]);
          for(j = c[i] ; j <= d[i] ; j++)
               a1[j] = 1;    
  }
  l1 = c[0];
  e1 = d[p-1];
  for(i = 0 ; i < q ; i++) {
      scanf("%d%d", &c[i], &d[i]);
          for(j = c[i] ; j <= d[i] ; j++)
               b1[j] = 1;
  }
  for(i = c[0] ; i <= d[q-1] ; i++) {
      for(j = l1 ; j <= e1 ; j++) {
          if(j-i > r )
               break;
          if(a1[j] && b1[i] && j-i>0) { 
               res[j-i] = 1;
          }
      }  
  }  

  for(i = l ; i <= r ; i++) 
      sum = sum + res[i];
  printf("%d",sum);
  return 0;
  }
 
