#include <stdio.h>

int min(int a, int b){
    return a<b?a:b;
}
int max(int a, int b){
    return a>b?a:b;
}

int main(int argc, char *argv[])
{
    int i, n, xf = 1, yf = 1, sum =0;
    unsigned long long area = 0;
    scanf("%d", &n);
    int x0=31400, y0=31400, x1=0, y1=0;
    int a, b, c, d;
    while(n--){
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if((a-x0)*(b-y0)<0)xf = 0;
        else if(a<=x0 && b<=y0) xf = 1;
        if((c-x1)*(d-y1)<0)yf = 0;
        else if(c>=x1 && d>=y1) yf = 1;
        x0 = min(a, x0);
        y0 = min(b, y0);
        x1 = max(c, x1);
        y1 = max(d, y1);
        sum += (d-b)*(c-a);
    }
    if(xf && yf && sum == (x1-x0)*(y1-y0) && x1-x0 == y1-y0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
