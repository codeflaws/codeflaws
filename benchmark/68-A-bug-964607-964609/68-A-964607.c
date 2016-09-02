#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main(int argc, char *argv[])
{
    int tmp,min,i;
    for(i=0,min=1000;i<4;i++)
    {
        scanf("%d",&tmp);
        if(tmp<min)
        {
            min=tmp;
        }
    }
    int a,b;
    scanf("%d %d",&a,&b);
    if(min<=a)
    {
         printf("%d",0);
         return 0;
    }
    if(a==b)
    {
        printf("%d",1);
         return 0;
    }
    if(min>b)
    {
        printf("%d",b-a);
        return 0;
    }
    if(min<b)
    {
        printf("%d",min-a);
        return 0;
    }
    
}