#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,a,min,max,rem;
    scanf("%d",&n);
    max=(n/7)*2;
    min=max;
    rem=n%7;
    if(rem==1)
        max=max+1;
    if(rem<=5 && rem>1)
        {
        max=max+2;
        }
    else if(rem==6)
    {
        max=max+2;
        min=min+1;
    }
    printf("%d %d",min,max);
    return 0;
}
