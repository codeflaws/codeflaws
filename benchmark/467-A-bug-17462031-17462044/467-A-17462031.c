#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,count=0,a,b,t;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        t=b-a;
        if(t>2)
            count++;
    }
    printf("%d\n",count);
return 0;
}
