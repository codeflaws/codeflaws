#include <stdio.h>

int main(int argc, char *argv[])
{
  char c;
  char znak[400];
  int krok = 0;
  int i = 0;
  int zavynac = 0;
  
  
  while ((c = getchar()) != EOF){
    znak[i] = c;
    i++;
  }
  int maxi = i;
  
  for (i = 0; i < maxi; i++){
    if (i > 0){
      if ((znak[i] == 'd') && (znak[i + 1] == 'o') && (znak[i + 2] == 't') && ((i + 3) != maxi)){
        putchar('.');
        i++;
        i++;
      } else if ((znak[i] == 'a') && (znak[i + 1] == 't') && (zavynac == 0)){
        putchar('@');
        zavynac++;
        i++;
      } else {
        putchar(znak[i]);
      }
    } else {
      putchar(znak[i]);
    }
  }
  
  
  
  return 0;
}
