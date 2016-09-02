#include<stdio.h>
int main(int argc, char *argv[])
{
 float h,x;
 char a;
 int m,y;
 scanf("%f%c%d",&h,&a,&m);
 if(h==12)
   h=0;
 printf("%.1f %d",(h+(float)m/60)*30,m*6);
 return 0;
 }
