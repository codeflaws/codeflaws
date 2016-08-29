#include <stdio.h>
int main(int argc, char *argv[])
{
    int n,i;
    scanf("%d",&n);
    if(n==0){printf("0\n0\n0");return 0;}
    if(n%2==0)printf("-1");
    for(i=0;i<n;i++)printf("%d ",i);
    printf("\n");
    for(i=0;i<n;i++)printf("%d ",i);
    printf("\n");
    for(i=0;i<n;i++)printf("%d ",(2*i)%n);
    return 0;
}
