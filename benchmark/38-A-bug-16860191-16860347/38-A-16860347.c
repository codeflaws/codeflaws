#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,i,ara[100],sum=0;
    scanf("%d",&a);
    for(i=0;i<a-1;i++)
    {
        scanf("%d",&ara[i]);
    }
    int b,c,k;
    scanf("%d %d",&b,&c);
    k=c-b;
    for(i=b-1;i<c-1;i++)
    {
        sum=sum+ara[i];
    }
    printf("%d",sum);
return 0;
}
