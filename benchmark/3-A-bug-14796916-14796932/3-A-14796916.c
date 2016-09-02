#include <stdio.h>
#include <math.h>
#include <stdlib.h>

char output[128];

int main(int argc, char *argv[])
{

  char start[3];
  char end[3];
  int sh, sv, eh, ev;
  int dh, dv;
  int move;

  scanf("%s\n", start);
  scanf("%s", end);

  sh = start[0] - 'a';
  sv = start[1] - '1';
  eh = end[0] - 'a';
  ev = end[1] - '1';

  dh = eh - sh;
  dv = ev - sv;

  output[0] = '\0';
  move = 0;

  while (dh != 0 && dv != 0) {
    if (dh > 0) {
      dh --;
      strcat(output, "R");
    }
    else if (dh < 0) {
      dh ++;
      strcat(output, "L");
    }
  
    if (dv > 0) {
      dv--;
      strcat(output, "U");
    }
    else if (dv < 0) {
      dv++;
      strcat(output, "D");
    }

    strcat(output, "\n");
    move++;
  }

  printf("%d\n%s", move, output);

  return 0;
}
