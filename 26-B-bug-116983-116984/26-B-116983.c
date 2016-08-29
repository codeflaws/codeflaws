#include <stdio.h>
#include <string.h>
char s[1000001];
int main(int argc, char *argv[]) {
 int index;
 scanf("%s",s);
 int openb=0,netcount=0;
 for(index = 0 ; index < strlen(s) ; index++) {
  if(s[index] == '(')
       openb++;
  else if(s[index] == ')' && openb > 0) {
  openb--;
  netcount+=2;
 }
 }
 printf("%d",netcount);

}
