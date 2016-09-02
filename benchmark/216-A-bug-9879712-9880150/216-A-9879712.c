#include<stdio.h>
int main(int argc, char *argv[])
{ int a,b,c;
 scanf("%d %d %d",&a,&b,&c);
 printf("%d",2*b+2*(a-1)+2*(c-2)+(c-1)*(b-1));
  return 0;
}
