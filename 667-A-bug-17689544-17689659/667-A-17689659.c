#include<stdio.h>
int main(int argc, char *argv[])
{
  float d,h,v,e;
  float x;
  scanf("%f %f %f %f",&d,&h,&v,&e);
  x=h/((v/(0.7853981634*d*d))-e);
  if(x<=0)
    printf("NO");
    else
    {
        printf("YES\n");
        printf("%f",x);
    }
    return 0;
}
