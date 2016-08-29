// David Wise - 5/28/13

#include <stdio.h>

int circle[4];
int largeind;

int indexoflargest() {
  int largest = 0;
  int index = -1;
  int i;
  for (i = 0; i < 4; i++) {
    if (circle[i] > largest) {
      largest = circle[i];
      index = i;
    }
  }
  return index;
}

void plus(int ind) {
  circle[(largeind + ind) % 4]++;
  circle[(largeind + ind + 1) % 4]++;
  printf("+%d\n", (largeind + ind) % 4 + 1);
}

void div(int ind) {
  circle[(largeind + ind) % 4] /= 2;
  circle[(largeind + ind + 1) % 4] /= 2;
  printf("/%d\n", (largeind + ind) % 4 + 1);
}

int main(int argc, char *argv[]) {
  scanf("%d%d%d%d", circle, circle + 1, circle + 2, circle + 3);
  
  while (1) {
    largeind = indexoflargest();
    
    if (circle[largeind] == 1)
      break;
    else if (circle[largeind] == 2) {
      if (circle[(largeind + 1) % 4] == 2) {
	if (circle[(largeind + 2) % 4] == 2) {
	  if (circle[(largeind + 3) % 4] == 2) {
	    div(0); div(2);
	  } else { // 2 2 2 1
	    div(0); plus(1); plus(2); div(1); div(2);
	  }
	} else { // 2 2 1 _
          if (circle[(largeind + 3) % 4] == 2) {
	    div(3); plus(0); plus(1); div(0); div(1);
          } else { // 2 2 1 1
	    div(0);
          }
	}
      } else { // 2 1 _ _
	if (circle[(largeind + 2) % 4] == 2) {
	  if (circle[(largeind + 3) % 4] == 2) {
	    div(2); plus(3); plus(0); div(3); div(0);
	  } else { // 2 1 2 1
	    plus(1); div(0); plus(1); div(1); plus(1); plus(2); div(1); div(2);
	  }
	} else { // 2 1 1 _
	  if (circle[(largeind + 3) % 4] == 2) {
	    div(3);
	  } else { // 2 1 1 1
	    plus(0); plus(3); div(0); div(3);
	  }
	}
      }
      break;
    }

    if (circle[largeind] % 2 == 1) {
      if (circle[(largeind + 1) % 4] % 2 == 1) {
	plus(0);
	div(0);
      } else if (circle[(largeind + 3) % 4] % 2 == 1) {
	plus(3);
	div(3);
      } else {
	plus(3);
	div(1);
      }
    } else {
      if (circle[(largeind + 1) % 4] % 2 == 0) {
	div(0);
      } else if (circle[(largeind + 3) % 4] % 2 == 0) {
	div(3);
      } else {
	plus(1);
	div(0);
      }
    }
  }
  return 0;
}
