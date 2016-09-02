
#include <stdio.h>
#include <math.h>

#define MAXN 100010

#define EPS 1e-6


int N;
double A,D;

double array[MAXN][2];

double time[MAXN];



int main(int argc, char *argv[])
{
   int i;
   scanf("%d %lf %lf",&N,&A,&D);
   for(i=0;i<N;i++)
       scanf("%lf %lf",&array[i][0],&array[i][1]);
   for(i=0;i<N;i++)
   {
       double t_max=array[i][1]/A;
       double t_ac=sqrt((2*D)/A);
       if (t_ac < t_max + EPS)
       {
           time[i]=array[i][0] + t_ac;
           continue;
       }
       double x_acelerado=0.5*A*t_max*t_max;
       double nx=D - x_acelerado;
       time[i]= array[i][0] + t_max + (nx/array[i][1]);
   }
   
   
   for(i=0;i<N-1;i++)
   {
       if (time[i+1]<time[i])
           time[i+1]=time[i];
   }
   
   for(i=0;i<N;i++)
       printf("%.10lf\n",time[i]);
   return 0;
}