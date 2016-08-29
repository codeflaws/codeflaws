#include<stdio.h>

int main(int argc, char *argv[])
{
    int a,b,p=0,x,y;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        x=a-b;
        printf("%d %d",b,x/2);
    }
    else if(a<b){
        x=b-a;
        printf("%d %d",a,x/2);
    }
    return 0;
}
