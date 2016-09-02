#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int px, py, vx, vy, a, b, c, d;

double G, K_sin, K_cos;
double p1x, p1y, p2x, p2y, p3x, p3y, p4x, p4y, p5x, p5y, p6x, p6y, p7x, p7y;
double P1x, P1y, P2x, P2y, P3x, P3y, P4x, P4y, P5x, P5y, P6x, P6y, P7x, P7y;

double square (double a)
{
    return a * a;
}

double PX (double x, double y)
{
    return px + (x * K_cos - y * K_sin);
}

double PY (double x, double y)
{
    return py + (x * K_sin + y * K_cos);
}

int main(int argc, char *argv[])
{
    scanf ("%d %d %d %d %d %d %d %d" , &px, &py, &vx, &vy, &a, &b, &c, &d) ;
    printf ("\t%d %d %d %d %d %d %d %d\n" , px, py, vx, vy, a, b, c, d) ;

    // angle
    if (vx == 0 && vy == 0) {
        K_sin = 0.0;
        K_cos = 1.0;
    } else {
        G = sqrt (square(vx)+square(vy));
        K_sin = vy/G;
        K_cos = vx/G;
    }

    // buils arrow
    p1x = b;
    p1y = 0.0;
    p2x = 0.0;
    p2y = a / 2.0;
    p3x = 0.0;
    p3y = c / 2.0;
    p4x = -d;
    p4y = p3y;
    p5x = -d;
    p5y = -p3y;
    p6x = 0.0;
    p6y = -p3y;
    p7x = 0.0;
    p7y = -p2y;

    P1x = PX (p1x, p1y);
    P1y = PY (p1x, p1y);

    P2x = PX (p2x, p2y);
    P2y = PY (p2x, p2y);

    P3x = PX (p3x, p3y);
    P3y = PY (p3x, p3y);

    P4x = PX (p4x, p4y);
    P4y = PY (p4x, p4y);

    P5x = PX (p5x, p5y);
    P5y = PY (p5x, p5y);

    P6x = PX (p6x, p6y);
    P6y = PY (p6x, p6y);

    P7x = PX (p7x, p7y);
    P7y = PY (p7x, p7y);

    // rotate arrow
/*
    printf ("\t%.9f %.9f %.9f\n" , G, K_sin, K_cos);
    // result
    printf ("%.9f %.9f\n" , p1x, p1y);
    printf ("%.9f %.9f\n" , p2x, p2y);
    printf ("%.9f %.9f\n" , p3x, p3y);
    printf ("%.9f %.9f\n" , p4x, p4y);
    printf ("%.9f %.9f\n" , p5x, p5y);
    printf ("%.9f %.9f\n" , p6x, p6y);
    printf ("%.9f %.9f\n\n" , p7x, p7y);
*/
    printf ("%.9f %.9f\n" , P1x, P1y);
    printf ("%.9f %.9f\n" , P2x, P2y);
    printf ("%.9f %.9f\n" , P3x, P3y);
    printf ("%.9f %.9f\n" , P4x, P4y);
    printf ("%.9f %.9f\n" , P5x, P5y);
    printf ("%.9f %.9f\n" , P6x, P6y);
    printf ("%.9f %.9f\n" , P7x, P7y);
    return 0;
}
