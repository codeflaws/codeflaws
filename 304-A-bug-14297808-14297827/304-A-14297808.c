#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{


    int a,b,n,counter=0;
    float f;
    double c;
    scanf("%d",&n);
    if(n>=1&&n<=10000){
            for(b=1;b<=n;b++){
                for(a=1;a<=b;a++){
                    c=a*a+b*b;
                   f=sqrt(c);
                if((int)f<=n&&f==(int)f)
                    {
                    counter++;
                    }



                }
            }
            printf("%d",counter);
}
return 0;
}

