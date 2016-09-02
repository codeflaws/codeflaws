#include <stdio.h>

int main(int argc, char *argv[]) {
  char s[9][9], n = 0, m, i, j;
  
  for(i = 0; i < 8; ++i) {
    scanf("%s", &s[i]);
    
    m = 0;    
    for(j = 0; j < 8; ++j) {
      if(s[i][j] == 'B') {
        ++m;
      }
      else {
        break;
      }
    }
    if(m == 8) {
      ++n;
    }
    
  }
  
  for(j = 0; j < 8; ++j) {
    m = 0;
    for(i = 0; i < 8; ++i) {
      if(s[i][j] == 'B') {
        ++m;
      }
      else {
        break;
      }
    }
    if(m == 8) {
      ++n;
    }
  }
  
  
  printf("%d", n);
  return 0;
}