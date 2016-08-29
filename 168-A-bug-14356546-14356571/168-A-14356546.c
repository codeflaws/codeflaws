#include<stdio.h>
int main(int argc, char *argv[]) {
  int n,x,y;
  scanf("%d%d%d",&n,&x,&y);
  int ans;
  double res=1.0*n*y/100-x;
  if(res!=(int)res) ans=(int)res+1;
  else ans=(int)res;
  printf("%d\n",ans);
  return 0;
}