
#include<stdio.h>
#include<math.h>
//#include<conio.h>


int main(int argc, char *argv[])
{
    float a,b,c;
    int sum;
    scanf("%f %f %f",&a,&b,&c);
    printf("%d",sum=(4*(sqrt(a * b / c) + sqrt(a * c / b) + sqrt(b * c / a))));
    return 0;
}
