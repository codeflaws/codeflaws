#include <stdlib.h>
#include <stdio.h>

unsigned int BestCase  (unsigned int *list, size_t n);

int main(int argc, char *argv[]) {

  unsigned int *list;
  size_t n, i;

  scanf("%u", &n);

  list = (unsigned int*)malloc(sizeof(unsigned int) * n);

  for (i = 0; i < n; i++)
    scanf("%u", &list[i]);

  printf("%u", BestCase(list, n));

  return 0;

}

unsigned int LeftSide (unsigned int *list, size_t pos) {

  unsigned int result = 0;

  while (pos && list[pos-1] <= list[pos]) {
    result++;
    pos--;
  }

  return result;

}

unsigned int RightSide (unsigned int *list, size_t pos, size_t max) {

  unsigned int result = 0;

  while (pos < max && list[pos+1] <= list[pos]) {
    result++;
    pos--;
  }

  return result;

}

unsigned int BestCase (unsigned int *list, size_t n) {

  unsigned int result = 0;
  unsigned int temp;
  size_t i;

  for (i = 0; i < n; i++) {
    temp = LeftSide(list, i) + RightSide(list, i, n-1) + 1;
    if (result < temp)
      result = temp;
  }

  return result;

}
