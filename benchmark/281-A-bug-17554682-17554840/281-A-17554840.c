
#include<stdio.h>
int main(int argc, char *argv[])
{
    char ar[100000];
    gets(ar);
   if(ar[0]>='a'&& ar[0]<='z')
    {
     ar[0]=ar[0]-32;
    }
    puts(ar);

return 0;
}
