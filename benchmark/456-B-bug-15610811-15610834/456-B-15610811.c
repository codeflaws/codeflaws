#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char a[100005];
    int l,d;
    scanf("%s",a);
    l=strlen(a);
    d=a[l-2]+a[l-1];
    if(d%4==0)
        printf("4");
    else
        printf("0");
    return 0;
}
