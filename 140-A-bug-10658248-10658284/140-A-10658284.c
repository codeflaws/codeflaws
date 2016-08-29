#include <stdio.h>
#include <math.h>
#define PI 3.141592654
int main(int argc, char *argv[])
{
    int n;
    float r,R;
    scanf("%d %f %f",&n,&R,&r);
    if(r<=R&&n==1){
        if(n==1) printf("YES");
        else printf("NO");
    }
    else{
         float s=asin(r/(R-r));
         float S=(s*180)/PI;
         if(n<=(180/S)) printf("YES");
         else printf("NO");
    }
    return 0;
}
