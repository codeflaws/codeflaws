#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,count=0,i;
    scanf("%d %d",&n,&m);
    int a[2*m];
    for(i=0;i<2*m*n;i++)
    {
        scanf("%d",&a[i]);  
    }
    for(i=0;i<2*m*n;i++)
    {
        if((a[i]+a[i+1])>=1)
        {
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}