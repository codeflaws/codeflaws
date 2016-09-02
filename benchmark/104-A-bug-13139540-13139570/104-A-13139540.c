#include <stdio.h>
int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    if(n<=10) printf("0");
    else if(n-10==10) printf("15");
    else printf("4");
    return 0;
}
