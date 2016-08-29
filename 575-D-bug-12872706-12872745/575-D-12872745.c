#include<stdio.h>
int main(int argc, char *argv[])
{
int i;
printf("2000\n");
for(i=1;i<=1000;i++)
  printf("%d %d %d %d\n",i,1,i,2);
for(i=1000;i>=1;i--)
  printf("%d %d %d %d\n",i,1,i,2);
return 0;
}