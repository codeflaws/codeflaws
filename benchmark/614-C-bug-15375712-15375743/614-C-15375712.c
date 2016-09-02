#include <stdio.h>
#include <math.h>
#define INF 0x7fffffff
#define M_PI 3.14159265358979323846

unsigned char has_obtuse(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double side1, side2, side3;
    side1 = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);
    side2 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
    side3 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    return (side1 > side2 + side3 || side3 > side1 + side2);
}

double distance(int x1, int y1, int x2, int y2, int px, int py)
{
    if (has_obtuse(x1, y1, x2, y2, px, py)) {
        double d1 = sqrt((double)(x1 - px) * (x1 - px) + (double)(y1 - py) * (y1 - py));
        double d2 = sqrt((double)(x2 - px) * (x2 - px) + (double)(y2 - py) * (y2 - py));
        return d1 < d2 ? d1 : d2;
    }
    // D = Abs(Ax + By + C) / Sqrt(A * A + B * B)
    double a, b, c;
    if (x1 == x2) {
        a = 1; b = 0; c = -x1;
    } else {
        a = y2 - y1; b = x1 - x2;
        c = -(y1 * b + x1 * a);
    }
    return fabs(a * px + b * py + c) / sqrt(a * a + b * b);
}

int main(int argc, char *argv[])
{
    int n, px, py;
    int x1, y1, x2, y2, x0 = INF, y0 = INF;
    double dist, maxdist = -1, mindist = 999999999;

    scanf("%d%d%d", &n, &px, &py);
    do {
        x1 = x2; y1 = y2;
        scanf("%d%d", &x2, &y2);
        if (x0 == INF) {
            x0 = x2; y0 = y2;
        } else {
            dist = distance(x1, y1, x2, y2, px, py);
            if (dist > maxdist) maxdist = dist;
            if (dist < mindist) mindist = dist;
        }
        dist = sqrt((double)(x2 - px) * (x2 - px) + (double)(y2 - py) * (y2 - py));
        if (dist > maxdist) maxdist = dist;
        if (dist < mindist) mindist = dist;
    } while (--n);
    dist = distance(x2, y2, x0, y0, px, py);
    if (dist > maxdist) maxdist = dist;
    if (dist < mindist) mindist = dist;
    printf("%.12lf\n", (double)(maxdist * maxdist - mindist * mindist) * M_PI);
    return 0;
}
