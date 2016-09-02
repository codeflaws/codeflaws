#include <stdio.h>

int n;
int tb[1005][1005];
int use[1005];

int main(int argc, char *argv[])
{
  int i,j,a,b;
  char tmp;

  scanf("%d", &n);
  scanf("%c", &tmp);

  for (i=0; i < n; ++i)
    {
      for (j=0; j < n; ++j)
    scanf("%c", &tb[i][j]);
      scanf("%c", &tmp);
    }

  for (i = 0; i < n; ++i)
    {
      for(j=0; j < n; ++j)
    {
      if (tb[i][j] == '.') use[i] = 1;
    }
    }

  a = 0;
  for (i=0; i < n; ++i)
    if (use[i] == 0) a = 1;

  if (!a)
    {
      for (i = 0; i < n; ++i)
      for(j=0; j < n; ++j)
          if (tb[i][j] == '.')
        {
          printf("%d %d\n", i+1, j+1);
          break;
        }

      return 0;
    }

  
  for (i=0; i < n; ++i)
    use[i] = 0;
  
  for (j = 0; j < n; ++j)
    {
      for(i=0; i < n; ++i)
    {
      if (tb[i][j] == '.') use[i] = 1;
    }
    }

  a = 0;
  for (i=0; i < n; ++i)
    if (use[i] == 0) a = 1;

  if (!a)
    {
      for (j = 0; j < n; ++j)
      for(i=0; i < n; ++i)
          if (tb[i][j] == '.')
        {
          printf("%d %d\n", i+1, j+1);
          break;
        }

      return 0;
    }

  printf("-1\n");

  return 0;
}
