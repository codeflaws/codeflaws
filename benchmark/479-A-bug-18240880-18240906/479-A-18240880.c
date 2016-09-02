#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b,c, ans[8], i, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    ans[1]=a+(b*c);
    ans[2]=a*(b+c);
    ans[3]=a*b*c;
    ans[4]=(a+b)*c;
    ans[5]=a+b+c;
    d=ans[1];
    ans[0]=0;
    for(i=0; i!=5; i++)
    {

        if(d<ans[i])
        {
            d=ans[i];
        }
    }
    printf("%d",d);
    return 0;
}
