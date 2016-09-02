#include<stdio.h>
//#include<conio.h>

int main(int argc, char *argv[])
{
    int k,n,w,p,d;
    scanf("%d %d %d",&k,&n,&w);
    p=k*w*(w+1)/2;
    d=p-n;
    printf("%d",d);
return 0;
}
