#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  long i,j;
  int *h;
  scanf("%d",&n);
  h=calloc(n,sizeof(int));
  h[0]=1;
  for (j=2,i=1;;i+=j,j++) {
    if (i%n==0) break;
    h[i%n]=1;
    printf("(%d %d) ",i,i%n);
  }
  for (i=0;i<n;i++) {
    if (!h[i]) {
      printf("NO\n");
      return 0;
    }
  }
  printf("YES");
  return 0;
}
