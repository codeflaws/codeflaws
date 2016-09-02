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
  scanf("%s",pattern);
  int npattern=strlen(pattern);
  int i,j;
  for(i=0;i<8;i++) {
    int match=1;
    for(j=0;j<npattern;j++) {
      if(pattern[j]!='.' && pattern[j]!=name[i][j]) {
        match=0;
        break;
      }
    }
    if(match) {
      printf("%s",name[i]);
      break;
    }
  }
  return 0;
}