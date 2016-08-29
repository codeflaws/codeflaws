#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,j,k;
    scanf("%d",&n);
    i=n/7;
    i*=2;
    j=n%7;
    if(j>0)
    {
        if(j==1)
       k=i+1;
      else
        k=i+2;
    }
    else
        k=i;

    printf("%d %d",i,k);
    return 0;
}
