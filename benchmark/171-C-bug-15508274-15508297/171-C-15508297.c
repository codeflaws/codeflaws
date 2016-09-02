#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i=0, j=0,s;
  int arr[10000];
  char temp;
  do {
      scanf("%d%c", &arr[i], &temp);
      i++;
  } while(temp != '\n');
  s=0;
  for(j=0; j<i; j++) {
    s=s+j*arr[j];
  }
	printf("%d",s);
  return 0;
}