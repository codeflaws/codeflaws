#include <stdio.h>

int main(int argc, char *argv[])
{
    int i,b,q,s,t,count=1;
    float a=0;
    scanf("%d",&t);
    scanf("%d",&s);
    scanf("%d",&q);
    b=s;
  for(i=0 ; b>a && b<=t ; i++)
{

    a=a+((float)q/(q-1));
    b++;

    if(b<=a && b!=t)
    {
        count++;
        a=0;
    }
}

    printf("%d",count);

        return 0;
}
