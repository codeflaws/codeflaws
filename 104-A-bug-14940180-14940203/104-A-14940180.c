#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int n,f;
    scanf("%d",&n);
    f=n-10;
    
    if (f<=0){
        printf("0");
    }
    else if (f==1){
        printf("4");
    }
    else if (f==11){
        printf("1");
    }
    else if(f==10){
        printf("15");
    }
    else if (f>=12){
        printf("0");
    }
    else{
        printf("4");
    }
    return 0;
}
