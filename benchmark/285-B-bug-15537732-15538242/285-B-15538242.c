#include<stdio.h>
  int main(int argc, char *argv[]) {
  int n, s, t, p[100000], i, c = 0, f = 1;
  scanf("%d%d%d", &n, &s, &t);
  for(i = 1 ; i <= n ; i++) 
      scanf("%d", &p[i]);
  i = s;
  if(s == t) 
       printf("0");
  else if(p[t] == t || p[s] == s)
       printf("-1");
  else {
      while(i != t) {
            c++;
            i = p[i]; 
            if(i == s) {
                f = 0;
                break;
            }
      }
      if(f)      
           printf("%d", c);
      else
           printf("-1");
  }        
  return 0;
  }
