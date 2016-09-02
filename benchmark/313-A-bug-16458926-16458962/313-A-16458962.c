#include<stdio.h>
int main(int argc, char *argv[])
{
int a,b,c,d,e;
scanf("%d",&a);
if(a>0)
    printf("%d",a);
if(a<0)
{
     b=a%10;
     c=a/10;
     d=a/100;
     e=(d*10)+b;
     if(c>e)
     {
         printf("%d",c);
     }
     else{
        printf("%d",e);
     }

}

return 0;
}
