#include <stdio.h>
double a,b,m;
int vx,vy,vz;
int main(int argc, char *argv[])
{
    double t,d;
    scanf("%lf%lf%lf%d%d%d",&a,&b,&m,&vx,&vy,&vz);
    t = m/-vy;
    
    d = (vx>0?vx:-vx)*t;
    if(d<a/2) printf("%.9f ",vx>0?a/2+d:a/2-d);
    else
    {
        for(d-=a/2,vx=-vx;d>a;d-=a,vx=-vx);
        printf("%.9f ",vx>0?d:a-d);
    }
    
    d = (vz>0?vz:-vz)*t;
    for(;d>b;d-=b,vz=-vz);
    printf("%.9f",vz>0?d:b-d);
    
    return 0;
}