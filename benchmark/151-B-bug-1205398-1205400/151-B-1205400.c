#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _friend {
  char name[21];
  int t, p, g;
} friend;

int main(int argc, char *argv[]) {
  int n, si;
  friend *friends[100];
  int maxt, maxp, maxg;
  friend *tmp;
  int i, j;
  char t[9];
  char taxi[100][21], pizza[100][21], girl[100][21];
  int ti, pi, gi;

  maxt = maxp = maxg = 0;

  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    tmp = malloc(sizeof(friend));
    friends[i] = tmp;
    tmp->t = tmp->p = tmp->g = 0;
    scanf("%d%s", &si, tmp->name);
    for (j = 0; j < si; j++) {
      scanf("%s", t);
      if (t[0] == t[1] && t[1] == t[3] && t[3] == t[4] && t[4] == t[6] && t[6] == t[7]) {
	tmp->t++;
      } else if (t[0] > t[1] && t[1] > t[3] && t[3] > t[4] && t[4] > t[6] && t[6] > t[7]) {
	tmp->p++;
      } else {
	tmp->g++;
      }
    }
    maxt = (tmp->t > maxt) ? tmp->t : maxt;
    maxp = (tmp->p > maxp) ? tmp->p : maxp;
    maxg = (tmp->g > maxg) ? tmp->g : maxg;
  }

  ti = pi = gi = 0;
  for (i = 0; i < n; i++) {
    if (friends[i]->t == maxt) {
      strcpy(taxi[ti], friends[i]->name);
      ti++;
    }
    if (friends[i]->p == maxp) {
      strcpy(pizza[pi], friends[i]->name);
      pi++;
    }
    if (friends[i]->g == maxg) {
      strcpy(girl[gi], friends[i]->name);
      gi++;
    }
  }

  printf("If you want to call a taxi, you should call: ");
  for (i = 0; i < ti; i++) {
    printf("%s", taxi[i]);
    if (i == ti-1) printf(".\n");
    else printf(", ");
  }
  printf("If you want to order a pizza, you should call: ");
  for (i = 0; i < pi; i++) {
    printf("%s", pizza[i]);
    if (i == pi-1) printf(".\n");
    else printf(", ");
  }
  printf("If you want to go to a cafe with a wonderful girl, you should call: ");
  for (i = 0; i < gi; i++) {
    printf("%s", girl[i]);
    if (i == gi-1) printf(".\n");
    else printf(", ");
  }

  return 0;
}
