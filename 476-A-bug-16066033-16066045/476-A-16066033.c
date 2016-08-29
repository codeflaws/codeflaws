#include <stdio.h>

int main(int argc, char *argv[])
{
  int m,n,r,i,flag,c;
  flag = c = 0;

    scanf("%i",&n);
    getchar();
    scanf("%i",&m);
    getchar();

  r = n;

  if(n > m)
  {
    while(1)
    {
      if(r >= 2)
      {
        r -= 2;
        c++;
      }
      else
      {
        if(r != 0)
          c++;
        break;
      }
    }

    for(i = 0; i < n; i++)
    {
      if((c % m) == 0)
        break;
      else
        c++;
    }
    printf("%i\n",c);
  }
  else
    printf("%i\n",-1);

  return 0;
}
