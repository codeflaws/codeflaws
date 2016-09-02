#include <stdio.h>
#include <inttypes.h>

int main(int argc, char *argv[])
{
  long long a_odd = 0, a_even = 0, b_odd = 0, b_even, odd = 0, even = 0, i = 0;
  char c;

  while (scanf("%c", &c) != EOF) {
    if (c == 'a') {
      if (i % 2 == 0) {
        // a even
        a_even++;
        odd  += a_even;
        even += a_odd;
      } else {
        // a odd
        a_odd++;
        odd  += a_odd;
        even += a_even;
      }
    } else if (c == 'b') {
      if (i % 2 == 0) {
        // b even
        b_even++;
        odd  += b_even;
        even += b_odd;
      } else {
        // b odd
        b_odd++;
        odd  += b_odd;
        even += b_even;
      }
    }
    i++;
  }

  printf("%" PRId64 " %" PRId64 "\n", even, odd);

  return 0;
}
