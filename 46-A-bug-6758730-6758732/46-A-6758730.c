#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,s,n;
    scanf("%d",&n);
    s=1;
    for(i=1;i<n;i++)
    {
        s=(s+i)%n;
        printf("%d ",s);
    }
    printf("\n");
return 0;
}