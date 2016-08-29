#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double a, v, l, d, w, t;
    
    scanf("%lf %lf", &a, &v);
    scanf("%lf %lf %lf", &l, &d, &w);
    
    if ((v <= w) || ((2 * a * d) <= (w * w))) 
        if ((2 * a * l) <= (v * v)) t = sqrt(2 * l / a);
        else t = v / (2 * a) + l / v;
    else {
        t = w / a;
        if ((2 * a * d) <= (2 * v * v - w * w)) t += (sqrt((w * w + 2 * a * d) / 2) - w) * 2 / a;
        else t += 2 * sqrt((v * v) - (w * w)) / a + ((2 * a * d) - 2 * (v * v) + (w * w)) / (2 * a * v);
        if (2 * a * (l - d) <= ((v * v) - (w * w))) t += (sqrt(w * w + 2 * a * (l - d)) - w) / a; 
        else t += ((v - w) * (v - w) + 2 * a * (l - d)) / (2 * a * v);
    }
        
    printf("%.5f", t);
        
    return 0;
}