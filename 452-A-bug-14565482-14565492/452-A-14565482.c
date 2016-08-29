#include<stdio.h>
int main(int argc, char *argv[]) {
  int n;
  scanf("%d",&n);
  char pattern[8+1];
  char name[8][8+1];
  strcpy(name[7],"vaporeon");
  strcpy(name[3],"jolteon");
  strcpy(name[1],"flareon");
  strcpy(name[0],"espeon");
  strcpy(name[6],"umbreon");
  strcpy(name[4],"leafeon");
  strcpy(name[2],"glaceon");
  strcpy(name[5],"sylveon");
  int is_you[8];
  scanf("%s",pattern);
  int npattern=strlen(pattern);
  int i,j;
  for(i=0;i<8;i++) {
    is_you[i]=1;
  }
  for(i=0;i<npattern;i++) {
    if(pattern[i]!='.') {
      for(j=0;j<8;j++) {
        if(is_you[j]) {
          if(pattern[i]!=name[j][i]) {
            is_you[j]=0;
          }
        }
      }
    }
  }
  for(i=0;i<8;i++) {
    if(is_you[i]) {
      printf("%s",name[i]);
      break;
    }
  }
  return 0;
}