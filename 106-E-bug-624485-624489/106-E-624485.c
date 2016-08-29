#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

double p[100][3], w[2][3];
const double EPS = 1e-6;
const double PHI = 1.6180339887;
int  n;
double max(double a, double b) {
    return a > b ? a : b;
}   

double f() {
    double result = .0, current = .0;
    int i, j;
    for (i = 0; i < n; ++i) {
        current = 0;
        for (j = 0; j  < 3; ++j) {
            current += pow(w[0][j] - p[i][j], 2.0);
        }
        result = max(result, current);
    }
    return result;
}   

double g() {
    double result = .0, current = .0;
    int i, j;
    for (i = 0; i < n; ++i) {
        current = 0;
        for (j = 0; j  < 3; ++j) {
            current += pow(w[1][j] - p[i][j], 2.0);
        }
        result = max(result, current);
    }
    return result;
}   

double go(int coordinate) {
    if (coordinate == 3) {
        double fR = f(), gR = g();
        if (gR < fR) {
            memcpy(w[0], w[1], 24);
        }
        return gR;
    } else {
        double l = -1e4, r = 1e4, a, b, fA, fB, step;
        while (l + EPS < r) {
            step = (r - l) / PHI;
            a = l + step;
            b = r - step;
            w[1][coordinate] = a;
            fA = go(1 + coordinate);
            w[1][coordinate] = b;
            fB = go(1 + coordinate);
            if (fA < fB) {
                r = b;
            } else {
                l = a;
            }
        }
        w[1][coordinate] = (l + r) / 2;
        return go(1 + coordinate);          
    }
}
                    

int main(int argc, char *argv[]) {
    int i, j;
    scanf("%d",&n);
    for (i = 0; i < n; ++i) {
        for (j = 0; j < 3; ++j) {
            scanf("%lf", &p[i][j]);
        }
    }
    go(0);
    for (i = 0; i < 3; ++i) {
        printf("%.9lf ", w[0][i]);
    }
    return 0;
}
            
