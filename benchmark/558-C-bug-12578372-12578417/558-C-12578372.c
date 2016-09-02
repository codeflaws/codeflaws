#include <stdio.h>
#include <stdlib.h>

int washere [100005];
int vizitat [100005];
int pasi [100005];

typedef struct 
{
  int n;
  int pas;
} pair;

pair coada [100005];
int fst;
int lst;

int main(int argc, char *argv[])
{
  int n;
  scanf ("%d", &n);

  int i;
  for (i = 1; i <= n; ++i)
    {
      int x;
      scanf ("%d", &x);

      washere[x] += 1;
      vizitat[x] = i;
      
      pair pr;
      pr.n = x * 2;
      pr.pas = 1;

      fst = 0;
      lst = 0;
      coada[lst++] = pr;

      pr.n = x / 2;

      coada[lst++] = pr;

      while (fst < lst)
	{	  
	  pair crt = coada[fst++];
  
	  pair new;
	  if (crt.n <= 100002 && vizitat[crt.n] != i)
	    {
	      new = crt;
	      new.pas++;
	      new.n *= 2;

	      coada[lst++] = new;

	      new = crt;
	      new.pas++;
	      new.n /= 2;
	      
	      coada[lst++] = new;

	      ++washere[crt.n];
	      pasi[crt.n] += crt.pas;
	      vizitat[crt.n] = i;
	    }
	}
            
    }

  int best = pasi[1];
  for (i = 1; i <= 100000; ++i)
    if (best > pasi[i] && pasi[i] != 0 && washere[i] == n)
      best = pasi[i];

  printf ("%d\n", best);
    
  return 0;
}
