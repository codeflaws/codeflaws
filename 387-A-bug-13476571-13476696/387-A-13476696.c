#include <stdio.h>
int main(int argc, char *argv[])
{
    int n,m,a,b;
    scanf("%d:%d%d:%d",&n,&m,&a,&b);
    if(n>=a && m>=b)
    printf("%0.2d:%0.2d",n-a,m-b);
    else if(n>a && m<b )
    printf("%0.2d:%0.2d",n-a-1,60+m-b);
    else if(a>n && m>=b )
    printf("%0.2d:%0.2d",24+n-a,m-b);
    else if(a>n && m<b )
    printf("%0.2d:%0.2d",24+n-1-a,60+m-b);
    else if(a==n && b>m)
    printf("23:%0.2d",60+m-b);
    return 0;
}