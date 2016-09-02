#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[]){
double a,d;
int n;
scanf("%lf%lf",&a,&d);
scanf("%d",&n);
int i;
double c=0.0;
for(i=1;i<=n;i++){
        c=i*d;
        while(c>=4*a) c=c-4*a;
    if(c<a) printf("%lf 0.000000\n",c);
    else if(c<2*a) printf("%lf %lf\n",a,c-a);
    else if(c< 3*a) printf("%lf %lf\n",3*a-c,a);
    else printf("0.000000 %lf\n",4*a-c);
}
return 0;
}
