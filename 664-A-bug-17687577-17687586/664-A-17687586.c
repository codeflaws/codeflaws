#include<stdio.h>
char a[101],b[101];
int main(int argc, char *argv[])
{
    scanf("%s %s",a,b);
    if(strcmp(a,b)==0) printf("%s\n",a);
    else printf("1\n");
    return 0;
}
