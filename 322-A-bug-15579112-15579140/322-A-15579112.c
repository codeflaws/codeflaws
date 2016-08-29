#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,count=0,i,j;
    scanf("%d %d",&n,&m);
    count=n+(m-1);
    i=1;
    for(j=1;j<=m;j++)
        printf("%d %d\n",i,j);

    i=m;
    for(j=2;j<=n;j++)
        printf("%d %d\n",j,i);
return 0;
}
