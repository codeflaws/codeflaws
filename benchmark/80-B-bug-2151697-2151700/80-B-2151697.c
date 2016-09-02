#include<stdio.h>
int main(int argc, char *argv[])
{float a,b;
scanf("%f:%f",&a,&b);
a=a+b/60;
a=(a*360)/12;
a=(a>360)?a-360:a;
b=(b*360)/60;
b=(b==360)?0:b;
printf("%.1f %.1f",a,b);
return 0;
}
