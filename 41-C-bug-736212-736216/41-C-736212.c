#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int foundat = 0, i, foundchar = 0;
    char s[101];
    scanf("%s", &s);
    for(i = 0; i < strlen(s); i++)
    {
          if(s[i] == 'a' && ( i != strlen(s) - 1 && s[i + 1] == 't') && foundat == 0)
          {
                  printf("@");
                  foundat = 1;
                  i++;
          }
          else if(s[i] == 'd' && i < strlen(s) - 1 && s[i + 1] == 'o' &&  i < strlen(s) - 3 && s[i + 2] == 't' && foundchar == 1)
          {
                  printf(".");
                  i += 2;
          }
          else
          {
                  foundchar = 1;
                  printf("%c", s[i]);
          }
    }
    return 0;
}
