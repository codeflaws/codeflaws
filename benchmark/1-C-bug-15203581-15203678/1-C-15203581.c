#include <stdio.h>
#include <math.h>
#define PI 3.1415926535
#define eps 0.01
double find (double a,double b)
{
    if(fabs(a-0)<eps) return b;
    if(fabs(b-0)<eps) return a;
    return find(b,fmod(a,b));
}
double dist(double x0,double y0,double x1,double y1)
{
    double d=sqrt((x1-x0)*(x1-x0)+(y1-y0)*(y1-y0));
    return d;
}
int main(int argc, char *argv[])
{
    double x[3],y[3],d[3];
    int i;
    for(i=0;i<3;i++)   scanf("%lf %lf",&x[i],&y[i]);
    for(i=0;i<3;i++)
        d[i]=dist(x[i],y[i],x[(i+1)%3],y[(i+1)%3]);
    double p=(d[1]+d[2]+d[0])/2;
    double s=sqrt(p*(p-d[0])*(p-d[1])*(p-d[2]));
    double r=d[0]*d[1]*d[2]/(4*s);
    double ang0,ang1,ang2;
    ang0=2*acos((d[2]*d[2]+d[1]*d[1]-d[0]*d[0])/(2*d[2]*d[1]));
    ang1=2*acos((d[0]*d[0]+d[2]*d[2]-d[1]*d[1])/(2*d[2]*d[1]));
    ang2=2*acos((d[0]*d[0]+d[1]*d[1]-d[2]*d[2])/(2*d[0]*d[1]));
    double angle=find(ang0,find(ang1,ang2));
    printf("%.6lf\n",r*r*sin(angle)*PI/angle);
    return 0;
}
