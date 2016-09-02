#include <stdio.h>
int main(int argc, char *argv[])
{
    int m;
    scanf("%d",&m);
    int d=m-10;
    if(d==0) printf("0");
    else if(d==1||d==11) printf("4");
    else if (d>=2&&d<=9) printf("4");
    else if(d==10) printf("15");
    else printf("0");
    return 0;
}
