#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[]){
double a,d,dist;
int i,n,j;
scanf("%lf %lf",&a,&d);
scanf("%d",&n);
for(i=1;i<=n;i++){
    dist = i*d;
   // printf("%f\n",dist);
    dist -= a*4*floor(dist/(4*a));
     //printf("%f\n",dist);
    //printf("%d\n",dist==a);
    if(dist <= a){
        printf("%lf 0.0000000000\n",dist);
    }
    else if(dist<=(2*a)) printf("%lf %lf\n",a,dist-a);
    else if(dist<=(3*a)) printf("%lf %lf\n",a-(dist-(2*a)),a);
    else printf("0.0000000000 %lf\n",a-(dist-(a*3)));
}
 return 0;
}