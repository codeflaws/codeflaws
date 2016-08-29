#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int h,m;
    double ang1,ang2;
    scanf("%2d:%2d",&h,&m);
    ang2=6*1.0*m;
    ang1=(h+1.0*m/60)*30;
    if(ang1==360)ang1=0;
    if(ang2==360)ang2=0;
    printf("%.9lf %.9lf\n",ang1,ang2);
    return 0;
}