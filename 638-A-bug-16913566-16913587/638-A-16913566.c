#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,c;
    scanf("%d %d",&n,&c);
    if(c%2)
        printf("%d",(c+1)/2);
    else
        printf("%d",((n-1)/2)+1);

    return 0;
}
