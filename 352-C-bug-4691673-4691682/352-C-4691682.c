#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int n,m,i,t,Min,Max;
    double base,x;
    scanf("%d",&n);
    n=n<<1;
    for(i=1,m=base=0;i<=n;i++){
       scanf("%lf",&x);
       base+=x-floor(x);
       if(ceil(x)>floor(x)) m++;
    }
    if(m<=n/2){Min=0;Max=m;}
      else {Min=m-n/2;Max=n/2;}
    if(ceil(base)-base<=0.5) t=ceil(base);
      else t=floor(base);
    if(t<Min) printf("%.3lf",-base+Min);
      else
        if(t>Max) printf("%.3lf",base-Max);
          else  printf("%.3lf",fabs(base-t));
    return 0;
}



