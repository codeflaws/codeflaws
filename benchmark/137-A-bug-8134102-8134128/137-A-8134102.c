#include<stdio.h>

int main(int argc, char *argv[]){
  int hodor=1,c=1,i;
  char s[100];
  char buf[100];
  scanf("%s",s);
  buf[0]=s[0];
  buf[1]='\0';
  for (i=1;s[i]!='\0';i++){
    c++;
    buf[0]=s[i];
    if (buf[0]!=s[i-1] || c==5){
      c=0;
      hodor++;
    }
  }
  printf("%d\n",hodor);
  return 0;
}