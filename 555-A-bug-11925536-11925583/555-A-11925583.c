#include<stdio.h>

int main(int argc, char *argv[]){
  int n,k;
  int m,mat[(int)1E5];
  unsigned num,sorted;
  int i,j;

  scanf("%d%d",&n,&k);
  num=sorted=0;
  for(i=0;i<k;i++){
    scanf("%d",&m);
    for(j=0;j<m;j++) scanf("%d",mat+j);
    for(j=1;j<m;j++) if(mat[0]!=1 || mat[j]!=j+1) num++;
  }
  printf("%u\n",num*2+k-1);
  return 0;
}
