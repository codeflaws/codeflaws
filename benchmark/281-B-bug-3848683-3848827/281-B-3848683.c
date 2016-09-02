#include<stdio.h>
#include<math.h>
int gcd(int x, int y)
{
int temp, n;
temp = x % y;
if(temp != 0)
{
n = gcd(y, temp);
return(n);
}
if(temp == 0)
return y;
}

int main(int argc, char *argv[])
{ double a,b,n,x,y,min,m,t=0,c=0,v=0,r=0;
 scanf("%lf",&x);
 scanf("%lf",&y);
 scanf("%lf",&n);
 m=x/y;min=m;//printf("mm=%f",m);
 for(b=1;b<=n;b++)
 { a=ceil(b*m);if(min==0.00){break;}
 t=a/b;r=(a-1.0000) /b;  //printf("mm=%f\n",m);
 //k1=m-t;k2=fabs(m-r);
 //printf("r=%.4f %.4f k1=%f\n",r,fabs(m-r),fabs(m-t));
       if(fabs(m-t)<fabs(m-r)){ 
       if(fabs(m-t)<=min){min=fabs(m-t);c=a;v=b;}}
       
       
       else{ if(fabs(m-r)<=min){min=fabs(m-r);c=a-1.0000;v=b;}}}
       y=gcd(c,v);v=v/y;c=c/y;
                                      // printf("mm=%lf\n",min);
                                      printf("%d/%d",(int)c,(int)v);return 0;}