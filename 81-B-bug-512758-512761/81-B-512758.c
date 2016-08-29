#include <stdio.h>

char str[333],tmp[333],hash[333];

int main(int argc, char *argv[])
{
   int i,o=0,s=0;
   gets(str+1);
   for (i=1;str[i];i++)
      if (str[i]!=' ')
         tmp[++o]=str[i];
   for (i=1;tmp[i];i++)
      if (tmp[i]==',')
         hash[i]=1;
      else if (tmp[i]=='.')
      {
         if (!s)
            hash[i-1]=1;
         s=(s+1)%3;
      }
   for (i=1;i<=o;i++)
   {
      putchar(tmp[i]);
      if (i<o&&hash[i])
         putchar(' ');
   }
   puts("");
   return 0;
}
