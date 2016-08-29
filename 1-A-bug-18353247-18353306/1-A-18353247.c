#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[]){

     double n,m,a;
     double x;

     scanf("%lf %lf %lf",&n,&m,&a);


     x=ceil(n/a)*ceil(m/a);

     printf("%lf",x);

     return 0;

}
