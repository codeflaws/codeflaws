#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,c,i,j,k,n;
    char x;
    scanf("%d%c%d%d",&a,&x,&b,&n);
    j=b+n;
    i=j/60;
    b=j%60;
    a=a+i;
    a=a%24;
    if(a<10)
        printf("0%d",a);
    else
        printf("%d",a);
    if(b<10)
        printf("0:%d",b);
    else
        printf(":%d",b);


return 0;
}
