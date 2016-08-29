#include<stdio.h>

int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int sum=n;
    int i;

    int a[7];

    for(i=0;i<7;i++)
    {
       scanf("%d",&a[i]);
    }
    i=0;
    while(1)
    {
         sum=sum-a[i];
        if(sum<=0)
        {
            printf("%d",i+1);
            return 0;
        }
        i++;
        if(i==6) i=0;


    }
}
