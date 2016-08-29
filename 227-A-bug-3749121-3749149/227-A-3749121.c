#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int A[2], B[2], C[2], dx[2], dy[2];
  long long cp;
  scanf ("%d %d %d %d %d %d", A, A+1, B, B+1, C, C+1);
  dx[0] = B[0] - A[0]; dx[1] = C[0] - B[0];
  dy[0] = B[1] - A[1]; dy[1] = C[1] - B[1];
  cp = dy[1]*dx[0] - dy[0]*dx[1];
  printf ("%s\n", cp < 0 ? "RIGHT" : cp == 0 ? "TOWARDS" : "LEFT");
  exit (EXIT_SUCCESS);
return 0;
}
