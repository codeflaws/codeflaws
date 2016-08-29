#include <stdio.h>
#include<math.h>
int main(int argc, char *argv[]) {
    // your code goes here
    int r,h,n,temp;
    float t;
    scanf("%d %d",&r,&h);
    temp=h/r;
    n=2*temp;
    t=h%r;
    if(t<0.5*r){
        n++;
    }
    else if(t>=0.5*r&&t<sqrt(3)*0.5*r){
        printf("falg");
        n+=2;
    }
    else{
        n+=3;
    }
    printf("%d",n);
    return 0;
}
