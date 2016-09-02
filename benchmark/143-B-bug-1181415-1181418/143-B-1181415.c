#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
  int i,l,wd=200,ifm=0;
  char s[110];
  scanf("%s",s);
  l=strlen(s);
  for(i=0;i<l;i++){
    if(s[i]=='.'){
      wd=i;
      break;
    }
  }
  if(s[0]=='-')
    printf("(");
  printf("$");
  i=0;
  if(wd==200){
    i++;
    for(;i<l;i++){
      printf("%c",s[i]);
      if((l-i-1)%3==0&&(l-i-1)!=0)
        printf(",");
    }
    printf(".00");
  }
  else{
    i=0;
    if(s[0]=='-')
      i++;
    for(;i<wd;i++){
      printf("%c",s[i]);
      if((wd-i-1)%3==0&&(wd-i-1)!=0)
        printf(",");
    }
    printf(".");
      for(i=wd+1;i<=wd+2;i++){
        if(i<l)
          printf("%c",s[i]);
        else
          printf("0");
      }
  }
  if(s[0]=='-')
    printf(")");
  return 0;
}
