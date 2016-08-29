#include<stdio.h>
#include<math.h>
  int main(int argc, char *argv[]) {
  int n, i, f = 0, x = 1, y = 1, l1, l2, j = 0, k = 0;
  long long int a1[200000] = {0}, sum = 0,a2[200000], a;
  scanf("%d", &n);
  for(i = 0 ; i < n ; i++) {
      scanf("%lld", &a);
      if(a > 0) 
          a1[j++] = a;
       else
          a2[k++] = -a;
       sum = sum + a;
  }      

      if(sum > 0)
          printf("first");
       else if(sum < 0)
          printf("second");
       else {
          for(i = 0 ; i < j&&i<k ;i++) {
              if(a1[i] > a2[i]) {
                  printf("first");
                  break;
              }
              else if(a1[i] > a2[i]){
                  printf("second");
                  break;
              }     
          }
          if(i==j||i==k) {   
              if(a > 0)
                  printf("first");
              else
                  printf("second");  
          }
  return 0;      
  }      
    return 0;
  }    

