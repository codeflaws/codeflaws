#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main(int argc, char *argv[])
{
    double d;//diameter in cm
    double h;//initial height in cm
    double v;//speed of drinking ml/s or cm3/s
    double e;//growth rate if stationary ml/s or cm3/s

    scanf("%lf %lf %lf %lf",&d,&h,&v,&e);

    double area,volume,vin;
    double t;

    area=PI*(pow((d/2),2));
    volume=area*h;
    vin=area*e;

    if(v>=vin)
    {
        t=volume/(v-vin);
        printf("YES\n%lf",t);
    }
    else
    {
        printf("NO");
    }
return 0;
}
