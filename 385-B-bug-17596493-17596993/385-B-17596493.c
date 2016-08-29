#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int b=0, i, l, a=0, sum=0;
    char x[5005];
    scanf("%s",&x);
    l = strlen(x);
    for(i = 1; i <= l-3; i++)
    {
        if(x[i-1] == 'b' && x[i] == 'e' && x[i+1] == 'a' && x[i+2] == 'r')
        {
             a=1;
             b = i-1;
        }
        sum+=b+1;
    }
    if (a==0)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",sum);
    }

    return 0;
}