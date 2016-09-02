#include<stdio.h>
int main(int argc, char *argv[])
{
    int k=0;
float m,n,f,t,x=0,p=0,c;
scanf("%f%f%f%f%f",&m,&n,&t,&f,&c);
x=t*m;
next:
p=(x/(n-m));
if((p*n)>=c)
{
printf("%d",k);
goto dk;
}
else
{
k++;
x=x+(2*p*m+f*m);
goto next;
}
dk:
return(0);
}
