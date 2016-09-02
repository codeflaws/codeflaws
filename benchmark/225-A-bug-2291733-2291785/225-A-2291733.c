#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int opp(int f) {
  switch ( f ) {
    case 1: return 6;
    case 2: return 5;
    case 3: return 4;
    case 4: return 3;
    case 5: return 2;
    case 6: return 1;
  }
}

int main(int argc, char *argv[]) {
  int i, ndice, top, lf, rf;
  bool ok;

  scanf("%d %d", &ndice, &top);
  for ( i=0, ok=true; i < ndice; ++i ) {
    scanf("%d %d", &lf, &rf);
    if ( lf == top || rf == top ) {
      ok = false;
      break;
    }
    top = opp(top);
  }
  if ( ok )
    printf("YES\n");
  else
    printf("NO\n");
  return EXIT_SUCCESS;
}
