#include<stdio.h>
int main(int argc, char *argv[])
{
    int s[109];
    int i,n,a,b,sum;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    scanf("%d %d",&a,&b);
    sum=0;
    s[0]=0;
    for(i=a-1;i<b;i++)
    {
        sum=sum+s[i];
    }
    printf("%d",sum);
return 0;
}