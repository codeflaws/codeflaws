#include <stdio.h>

int main(int argc, char *argv[]){
   int n, p1, p2, p3, t1, t2;
   scanf("%d%d%d%d%d%d", &n, &p1, &p2, &p3, &t1, &t2);
   
   int i, a, b, ans = 0, last;
   scanf("%d%d", &a, &b);
   ans += (b-a) * p1;
   last = b;
   for(i = 1; i < n; ++i){
      scanf("%d%d", &a, &b);
      
      if(a-last >= t1+t2){
         ans += t1 * p1;
         ans += t2 * p2;
         ans += (a-last-t1-t2) * p3;
      }else if(a-last >= t1){
         ans += t1 * p1;
         ans += (a-last-t1) * p2;
      }else{
         ans += (a-last) * p1;
      }
      
      ans += (b-a) * p1;
   }
   
   printf("%d\n", ans);
   return 0;
}
