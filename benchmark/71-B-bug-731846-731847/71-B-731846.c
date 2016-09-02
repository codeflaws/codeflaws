#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int n, k, t, i, num, num1, num2;
    scanf("%d%d%d", &n, &k, &t);
    num = trunc((n * k * t) / 100);
    num1 = num / k;
    num2 = num % k;
    for(i = 0; i < n; i++)
    {
          if(num1 > 0)
          {
                  printf("%d ", k);
                  num1--;
          }
          else if(num2 > 0)
          {
                  printf("%d ", num2);
                  num2 = 0;
          }
          else
                  printf("0 ");
    }
    system("Pause");
    return 0;
}
     
