#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
double x[2],y[2],r[2],answer,distance;
scanf("%lf%lf%lf",&x[0],&y[0],&r[0]);
scanf("%lf%lf%lf",&x[1],&y[1],&r[1]);
distance=sqrt((x[1]-x[0])*(x[1]-x[0])+(y[1]-y[0])*(y[1]-y[0]));
answer=.5*(distance-r[1]-r[0]);
if(answer<0)answer=answer*-1;
if(distance+r[0]<=r[1])answer=(r[1]-distance-r[0])/2;
if(distance+r[1]<=r[0])answer=(r[0]-distance-r[1])/2;
printf("%lf\n",answer);
return 0;
}

