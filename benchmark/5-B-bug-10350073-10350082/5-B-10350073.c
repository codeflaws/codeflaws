#include <stdio.h>
#include <string.h>
#define N 1001

void rep(int l, char c) {
    int i;
    for (i = 0; i < l; i ++) printf("%c", c);
}

int main(int argc, char *argv[])
{
  char lines[N][N];
  int l, ml=0, i, ll=0, res=0, j, sl, right=0;

  while (gets(lines[ll])) {
    l = strlen(lines[ll]);
    l > ml ? ml = l : 0;
    ll ++;
  }
  
  rep(ml + 2, '*');
  
  printf("\n");
  
  for (i = 0; i < ll; i ++) {
      printf("*");
      
      l = strlen(lines[i]);
      
      sl = (ml - l) / 2;
      
      if (!((ml - l) % 2)) {
          if (right) sl += 1;
          right = 1 - right;
      }
      
      rep(sl, ' ');
      
      printf("%s", lines[i]);
      
      rep(ml - l - sl, ' ');
      
      printf("*\n");
  }
  
  rep(ml + 2, '*');
  
  return 0;
}