#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
int a ,b,c ;
div_t op;
scanf("%d",&a);

op=div(a,36);
b=op.quot;

op=div(op.rem,3);
c=op.quot;
if(op.rem==2){c=c+1;}
if(c==12){b++;
c=0;}
    printf("%d  ",b);
    printf("%d",c);
    return 0;
}
