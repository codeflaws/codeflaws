/*
* CodeForces Round #181 A GNU/C
*/

#include <stdio.h>

#define MAXN 100

typedef unsigned short uShort;
typedef struct TVector
{
  int array[MAXN];
  uShort size;
} vector;

void print(vector* _vector)
{
  uShort i = 0;

  printf("%d ", _vector->size);

  for (i=0; i<_vector->size; i++) {
    printf(" %d", _vector->array[i]);
  }

  printf("\n");
}

int main(int argc, char *argv[])
{
  vector positive;
  vector negative;
  vector zero;
  uShort n = 0;
  int value = 0;

  //Reset size of the each vector
  positive.size = 0;
  negative.size = 0;
  zero.size = 0;

  scanf("%hu", &n);
  while (n--) {
    scanf("%d", &value);

    if (value > 0) {
      positive.array[positive.size++] = value;
    }
    else if (value < 0) {
      negative.array[negative.size++] = value;
    }
    else {
      zero.array[zero.size++] = value;
    }
  }

  if ( !(negative.size % 2) ) {
    zero.array[zero.size++] = negative.array[negative.size--];
  }

  if ( !positive.size ) {
    positive.array[positive.size++] = negative.array[--negative.size];
    positive.array[positive.size++] = negative.array[--negative.size];
  }

  //Print
  print(&negative);
  print(&positive);
  print(&zero);

  return 0;
}
