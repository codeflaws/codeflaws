#include<stdio.h>

int main(int argc, char *argv[])
{
    float n,s;
    scanf("%f%f",&n,&s);

    float max=-1;
    float a,b;
    float i;

    for(i=1;i<=n;i++){
        scanf("%f%f",&a,&b);
        if(a+b<=s){
                b=100-b;
              if(b==100) b=0;
            if(b>max){
                max=b;
            }
        }
    }
    printf("%.0f",max);
    return 0;
}
