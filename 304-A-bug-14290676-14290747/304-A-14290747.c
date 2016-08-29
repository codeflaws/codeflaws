#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{int b,c,n,soln=0;
double a;

scanf("%d",&n);
for(c=2;c<=n;c++)
{for(b=1;b<c;b++)
{a=sqrt(c*c-b*b);
if((sqrt(a*a+b*b)-sqrt(((int)a)*((int)a)+b*b))>=-0.000002&&(sqrt(a*a+b*b)-sqrt(((int)a)*((int)a)+b*b))<=0.000002)
   {
       soln++;
   }

}

}
printf("%d",soln/2);

    return 0;
}