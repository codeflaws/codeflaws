#include <stdio.h>

int main(int argc, char *argv[]){
  unsigned int n, m;
  unsigned int x, interx, intery, total, temp;
  scanf("%u %u", &n, &m);
  scanf("%u", &x);

  total = (1+n*m)/2;

  x--;

  if (n < m){
    temp = n;
    n = m;
    m = temp;
  }
  if ((n > 2*x) && (m > 2*x)){
    n -= 2*x;
    m -= 2*x;
    
    printf("%u\n");

    interx = (1+n)/2;
    if (m>1)
      interx *= 2;
    if(n%2 && (m%2 == 0))
      interx--;

    if (m>1){
      intery = 2*((m-2)/2);
      if (m%2 && (n%2 == 0))
	intery++;
    }
    else
      intery = 0;

    printf("%u\n", interx+intery);
  }
  else
    printf("0\n");

  return 0;
}
