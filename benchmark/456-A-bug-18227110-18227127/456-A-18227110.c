#include<stdio.h>
int main(int argc, char *argv[])
{
    int n , i , a[2] ,temp,c;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d%d",&a[0],&a[1]);
        temp = a[1] - a[0] ;

        if(temp > c)c=temp ;
    }
    if(c>0)printf("Happy Alex");
    else printf("Poor Alex");
    return 0 ;
}
