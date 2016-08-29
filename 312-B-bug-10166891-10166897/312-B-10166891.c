#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int x,y,z,t;
    float a,b,c,d;

    
    scanf("%d %d %d %d",&x,&y,&z,&t);
    
    a = x;
    b = y;
    c = z;
    d = t;
    
    if ( a == b)
    {
        printf("1\n");
        return 0;
    }
    if (c == d)
    {
        printf("%f\n",a/b);
        return 0;
    }
    
    
    
    printf("%f\n",a/b*(1/(1-(((b-a)/b)*((d-c)/d)))));
    
}