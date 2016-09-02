
#include<stdio.h>



int main(int argc, char *argv[])
{
  long long int ax,ay,bx,by,cx,cy;
  scanf("%lld%lld%lld%lld%lld%lld",&ax,&ay,&bx,&by,&cx,&cy);
  int a=(bx-ax)*(cy-by)-(cx-bx)*(by-ay);
  if(a==0)
  printf("TOWARDS\n");
  else if(a>0)
  printf("LEFT\n");
  else
  printf("RIGHT\n");
   
   return 0;
}
