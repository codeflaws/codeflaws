/* **
* @Codeforce Problem 404B. Marathon
* @date:2014.3.29
* @author:ckeling
* @tag:implemetation, math
******/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
    double a, d;
    int n;
    int i;
    scanf("%lf%lf", &a, &d);
    scanf("%d", &n);
    for(i = 1; i <= n; ++i){
        int t = (int)floor(i*d / a);
        double p = i*d - t*a;
        t %= 4;
        switch(t){
        case 0:
            printf("%.10f %.10f", p, 0.0);
            break;
        case 1:
            printf("%.10f %.10f", a, p);
            break;
        case 2:
            printf("%.10f %.10f", a-p, a);
            break;
        case 3:
            printf("%.10f %.10f", 0.0, a-p);
            break;
        }
        printf("\n");
    }

    return 0;
}
