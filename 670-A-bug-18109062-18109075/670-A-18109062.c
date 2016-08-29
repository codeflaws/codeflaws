#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,mx,mn,m,rem;
    scanf("%d",&n);
    m=n/7;
    rem=n%7;
    if(rem<=2)
        mx=m*2+rem;
    else
        mx=m*2+2;
    if(rem<=5)
        mn=m*2;
    else
        mn=m*2+1;
    printf("%d %d",mx, mn);
    return 0;
}
