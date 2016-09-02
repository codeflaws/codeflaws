#include <stdio.h>
#include <stdlib.h>
char * wordCapitalization(char *s){
    if(s[0]>='a'&&s[0]<='z')
        s[0]=s[0]-32;
      printf("%s\n",s);
      return s;
    }

int main(int argc, char *argv[])
{ char s[1000];
    scanf("%s",s);
    strcpy(s,wordCapitalization(s));
 printf("%s\n",s);
    return 0;
}
