#include <stdio.h>

int mask(int c) {
  char s_c[7];
  int i = 0;
  int ans = 0;

  sprintf(s_c, "%d", c);
  while (s_c[i] != '\0') {
    if (s_c[i] == '4') ans = ans*10 + 4;
    else if (s_c[i] == '7') ans = ans*10 + 7;
    i++;
  }
  return ans;
}

int main(int argc, char *argv[]) {
  int a, b, c;

  scanf("%d%d", &a, &b);
  c = a + 1;
  
  while (c < 1000000) {
    if (mask(c) == b) {
      printf("%d", c);
      break;
    }
    c++;
  }

  return 0;
}
