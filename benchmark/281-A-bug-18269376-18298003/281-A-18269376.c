#include <stdio.h>

int main(int argc, char *argv[])
{
   int i = 1;
   char str[100];
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
