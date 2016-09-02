#include <stdio.h>
#include <math.h>
int a,b,l;
double f(double x){return cos(x)*(b*tan(x)+a-l*sin(x));}
int main(int i, char *argv[]){
    double w,S=0,T=acos(0),s,t;
    scanf("%d%d%d",&a,&b,&l);
    if(a>b) a^=b^=a^=b;
    if(l<=b) w=l<=a?l:a;
    else for(i=255;i--;(w=f(s))>f(t)?S=s:(T=t))
    s=(S*2+T)/3,t=(S+T*2)/3;
    printf(w>1e-7?"%f\n":"My poor head =(\n",w);
    return 0;
}
