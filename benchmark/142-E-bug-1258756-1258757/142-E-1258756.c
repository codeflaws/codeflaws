#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define EPS 1e-10
#define SQ(x) ((x)*(x))
#define EQ(x,y) (fabs((x)-(y))<EPS)
#define M_PI 3.14159265358979323846

int r,h;
double ax,ay,az,ad,bx,by,bz,bd,d,th,ha,hb,temp1,temp2;

void print(double a){exit(!(printf("%.14f\n",a) ));}
void swap(double*a,double*b){double temp=*a;*a=*b;*b=temp;}
double hypot3(double x,double y,double z){return sqrt(x*x+y*y+z*z);}
double angle(double a,double b,double c,double d){return atan2(a*d-b*c,a*c+b*d);}



double hh(double thp,double th){
    double lr,lb,bth;
    double tx=r*cos(th),ty=r*sin(th);
    lr=r*sqrt(2*(1-cos(thp-th)));
    bth=angle(tx,ty,bx,by);
    lb=sqrt(SQ(d)+SQ(bd)-2*d*bd*cos(bth*r/d));
    return lr+lb;
}

double g(double th){
    double la,ath,sx,sy;
    double blg,brg,bllg,brrg,bld,brd;
    sx=r*cos(th); sy=r*sin(th);
    ath=angle(sx,sy,ax,ay);
    la=sqrt(SQ(d)+SQ(ad)-2*d*ad*cos(ath*r/d));

    blg=0; brg=2*M_PI;
    while(brg-blg>EPS){
        bllg=(blg*19+brg)/20; brrg=(blg+brg*19)/20;
        bld=hh(th,bllg); brd=hh(th,brrg);
        bld>brd?blg=bllg:(brg=brrg);
    }
    return la+bld;
}

double f(double th){
    double tx=r*cos(th),ty=r*sin(th),lr,lb;
    lr=hypot(ax-tx,ay-ty);
    th=angle(tx,ty,bx,by);
    lb=sqrt(SQ(d)+SQ(bd)-2*d*bd*cos(th*r/d));
    return lr+lb;
}

int main(int argc, char *argv[]){
    int i,j;
    double ans=1e9,alg,arg,allg,arrg,ald,ard;

    scanf("%d%d%lf%lf%lf%lf%lf%lf",&r,&h,&ax,&ay,&az,&bx,&by,&bz);
    if(EQ(ax,bx)&&EQ(ay,by)&&EQ(az,bz)) print(.0);
    if(az<EPS&&bz<EPS) print(hypot(ax-bx,ay-by));
    if(bz<az)swap(&ax,&bx),swap(&ay,&by),swap(&az,&bz);
    ad=hypot3(ax,ay,az-h); bd=hypot3(bx,by,bz-h);
    d=hypot(h,r);
    ha=hypot(ax,ay); hb=hypot(bx,by);
    th=acos((ax*bx+ay*by)/(ha*hb));

    if(az<EPS){
        if(EQ(bz,h)) print(d+r-ha);
        alg=0; arg=2*M_PI;
        while(arg-alg>EPS){
            allg=(alg*49+arg)/50; arrg=(alg+arg*49)/50;
            ald=f(allg); ard=f(arrg);
            ald>ard?alg=allg:(arg=arrg);
        }
        print(ald);
    }

    if(EQ(bz,h)) print(ad);
    temp1=sqrt(SQ(ad)+SQ(bd)-2*ad*bd*cos(th*r/d));
    alg=0; arg=2*M_PI;
    while(arg-alg>EPS){
        allg=(alg*49+arg)/50; arrg=(alg+arg*49)/50;
        ald=g(allg); ard=g(arrg);
        ald>ard?alg=allg:(arg=arrg);
    }
    temp2=ald;
    printf("%f %f\n",temp1,temp2);
    print(temp1<temp2?temp1:temp2);
    return 0;
}
