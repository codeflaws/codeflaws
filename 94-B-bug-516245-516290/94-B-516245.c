#include<stdio.h>

int main(int argc, char *argv[]){
  int in1,in2,people[5];
  int m,n,i,flg=0;
  for(i=0;i<5;i++) people[i]=0;
  scanf("%d",&m);
  for(i=0;i<m;i++){
    scanf("%d %d",&in1,&in2);
    people[in1-1]++;
    people[in2-1]++;
  }
  for(i=0;i<5;i++){
    if(people[i]==1 || people[i]==3){
      puts("WIN");
      flg=1;
      break;
    }
  }
  if(flg!=1) puts("FAIL");
  return 0;
}
