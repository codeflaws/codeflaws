#include <stdio.h>
#include <string.h>
#define N 1001

int main(int argc, char *argv[])
{
  char lines[N][N];
  int l, ml=0, i, ll=0, res=0;

  while (gets(lines[ll])) {
    
    l = strlen(lines[ll]);
    
    if (l > ml) {
        ml = l;
    }
    
    ll ++;
  }
  
  for (i = 0; i < ml + 2; i ++) {
    printf("*");
  }
  
  printf("\n");
  
  int j, sl;
  int left = 0;
  
  for (i = 0; i < ll; i ++) {
      printf("*");
      
      l = strlen(lines[i]);
      
      if (((ml - l) % 2) == 0) {
          sl = (ml - l) / 2;
      } else {
          if ((left % 2) == 0) {
            sl = (ml - l) / 2;
          } else {
            sl = (ml - l) / 2 + 1;
          }
          
          left = (left + 1) % 2;
      }
      
      for (j = 0; j < sl; j ++) {
          printf(" ");
      }
      
      printf("%s", lines[i]);
      
      for (j = 0; j < (ml - l - sl); j ++) {
          printf(" ");
      }
      
      printf("*\n");
  }
  
  for (i = 0; i < ml + 2; i ++) {
    printf("*");
  }
  
  return 0;
}