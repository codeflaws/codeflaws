#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
   int i = 1;
   char str[1000];
   scanf("%s",&str);
   //char str[] = "Tutorials Point";
    putchar (toupper(str[0]));

   while(str[i])
    {
        putchar(str[i]);
        i++;
    }

   return(0);
}
