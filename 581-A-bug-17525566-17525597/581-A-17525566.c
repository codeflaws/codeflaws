#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
   int a,b,c=0,d=0;
   scanf("%d %d",&a,&b);
   if(a>b){
    c=a-b;
    d=c/2;
    printf("%d %d",b,d);
   }
   else if(b>a){
    c=b-a;
    d=c/2;
    printf("%d %d",a,d);
   }
return 0;
}
