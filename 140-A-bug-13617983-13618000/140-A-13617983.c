#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define pi acos(-1)

int main(int argc, char *argv[])
{
    double a, b, r, R, n, s, req, area;
    scanf("%lf %lf %lf", &n, &R, &r);
    if(n==1){
        if(R>=r) printf("YES");
        else printf("NO");
        return 0;
    }
    if((2*r)>R){
        if(n==1) printf("YES");
        else printf("NO");
        return 0;
    }
    if(R==r){
        if(n==1) printf("YES");
        else printf("NO");
        return 0;
    }
    a = R-r;
    b = asin(r/a);
    b = (b*180)/pi;
    b=b*2*n;
    if(b<=360){
        printf("YES");
    }
    else printf("NO");




    return 0;
}
