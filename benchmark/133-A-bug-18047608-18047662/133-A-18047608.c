#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char *argv[])
{
  char s[100];
  scanf("%s",s);
  int i;
  
  int x=0;
  for(i=0;i<strlen(s);i++)
  {
      if(s[i]=='H' || s[i]=='Q' || s[i]=='9' || s[i]=='+')
         x=1;
        
  }
  
  if(x==1)
    printf("YES");
  else printf("NO");
return 0;
}

