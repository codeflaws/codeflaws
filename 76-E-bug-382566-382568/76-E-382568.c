#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int N, i, x, y;
  
  scanf("%d", &N);
  i = N;
  long long d=0, s1=0, s2=0;
  while(i--){
             scanf("%d%d",&x,&y);
             d+=x*x+y*y;
             s1+=x;
             s2+=y;
  }
  printf("%I64d", N*d-s1*s1-s2*s2);
  return 0;
}
