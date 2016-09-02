#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,p,min,max;
    scanf("%d %d",&n,&m);
    if(n==0)
        printf("Impossible");
    else
    {
    if(m>0)
      max=m+(n-1);
    else
        max=n;
    p=m-n;
    if(p>0)
      min=n+(m-n);
    else
      min=n;

    printf("%d %d",min,max);
    }
    return 0;

}
