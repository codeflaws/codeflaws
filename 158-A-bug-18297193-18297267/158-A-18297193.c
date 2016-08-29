#include<stdio.h>
int main(int argc, char *argv[]){
  int n,k,i,c=0;;
  scanf("%d %d",&n,&k);
  int score[n];
  for(i=0;i<n;i++){
    scanf("%d",&score[i]);
  }
  for(i=0;i<n;i++){
      if(score[i]>=score[k]&&score[k]>0)c++;
  }
  printf("%d",c);
  return 0;
}
