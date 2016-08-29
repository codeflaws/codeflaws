#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int lstarted = 0;
  int quotes = 0;
  int n;
  int i;
  
  char* s = (char*)malloc(100010*sizeof(char));
  gets(s);
  n = strlen(s);
  for(i=0;i<n;i++)
    {
      if(!lstarted)
    {
      if(s[i]==' ')
        continue;
      else if (s[i] == '\"')
        {
          lstarted = 1;
          quotes = 1;
          printf("<");
        }
      else
        {
          lstarted = 1;
          printf("<");
          printf("%c",s[i]);
        }
       
    }
      else
    {
      if(quotes)
        {
          if(s[i]=='\"')
        {
          quotes = 0;
          lstarted = 0;
          printf(">\n");      
        }
          else
        {
          printf("%c",s[i]);
        }
        }
      else
        {
          if(s[i]==' ')
        {
          lstarted = 0;
          printf(">\n");
        }
          else
        {
          printf("%c",s[i]);
        }
        }
    }
   }
  return 0;
}