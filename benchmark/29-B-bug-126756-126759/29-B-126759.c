#include <stdio.h>

#define GREEN 0
#define RED 1

int main(int argc, char *argv[])
{
  double l, d, v, g, r;
  double time;
  double sv_time;
  int sv_flag;
  
  scanf("%lf %lf %lf %lf %lf", &l, &d, &v, &g, &r);
  
  time = d/v;
  
  sv_time = 0;
  sv_flag = RED;
  while (sv_time <= time)
  {
    sv_flag = sv_flag == GREEN ? RED : GREEN;
    sv_time += sv_flag == GREEN ? g : r;
  }
  
  if (sv_flag == RED)
    time = sv_time;
  
  time += (l - d) / v;
  
  printf("%.8lf\n", time);
  
  return 0;
}
