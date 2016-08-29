#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,k,n,w,cost;
    cost=0;
    scanf("%d %d %d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        cost=(cost+(k*i));
    }
    if(cost<<n){printf("0");}
    else printf("%d",cost-n);
return 0;
}
