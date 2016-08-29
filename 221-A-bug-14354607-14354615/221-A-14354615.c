#include<stdio.h>
int main(int argc, char *argv[])
{
  int n;
  scanf("%d",&n);printf(" %d",n);int i;
  for(i=0;i<n-1;i++) 
  {
    printf(" %d",i+1);
  }
  printf("\n");
  return 0;
}