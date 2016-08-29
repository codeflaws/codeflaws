#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int a,b,i,count_a=0,count_b=0,count_draw=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<=6;i++)
    {

        if(abs(a-i)<abs(b-i))count_a++;
        else if(abs(a-i)>abs(b-i))count_b++;
        else count_draw=1;

    }
    printf("%d %d %d",count_a,count_draw,count_b);
return 0;
}
