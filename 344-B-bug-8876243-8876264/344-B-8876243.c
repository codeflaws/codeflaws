#include<stdio.h>

int main(int argc, char *argv[])
{
  int a,b,c,a1,b1,c1,i,j,k,state=0;
  scanf("%d%d%d", &a1, &b1, &c1);
  if((a1+b1-c1)/2<0 || (b1+c1-a1)/2<0 || (c1+a1-b1)/2<0)
    state=1;
  if(state==0)
    printf("%d %d %d\n", (a1+b1-c1)/2, (b1+c1-a1)/2, (c1+a1-b1)/2);
  else
    printf("Impossible\n");
  return 0;
}
