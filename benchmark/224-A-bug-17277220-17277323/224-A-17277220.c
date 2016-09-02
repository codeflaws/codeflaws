
#include<stdio.h>
#include<math.h>
//#include<conio.h>


int main(int argc, char *argv[])
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    printf("%f",(4*(sqrt(a * b / c) + sqrt(a * c / b) + sqrt(b * c / a))));
    return 0;
}
