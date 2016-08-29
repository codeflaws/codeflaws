#include<stdio.h>

#define MAXXY 2000000

int n, x, y;

int gcd (int a, int b)
{
  int c;
  while (b)
    {
      c = a % b;
      a = b;
      b = c;
    }

  return a;
}

char hitter[MAXXY];
char *name[2] = { "Vanya", "Vova" };

int main (int argc, char *argv[])
{
  int d, i, l, h1, h2;

  scanf ("%d %d %d\n", &n, &x, &y);
  d = gcd (x, y);
  x /= d;
  y /= d;

  h1 = y;
  h2 = x;
  for (i = 0; i < x + y - 2; i++)
    {
      if (h1 < h2)
	{
	  hitter[i] = 0;
	  h2 -= h1;
	  h1 = y;
	}
      else
	{
	  hitter[i] = 1;
	  h1 -= h2;
	  h2 = x;
	}
    }
  /*
     for(i=0; i<x+y-2; i++) printf("%d", hitter[i]);
     printf("\n");
   */

  for (i = 0; i < n; i++)
    {
      scanf ("%d\n", &l);
      l %= (x + y);
      if (l == 0 || l == x + y - 1)
	printf ("Both\n");
      else
	printf ("%s\n", name[hitter[l - 1]]);
    }

  return 0;
}
