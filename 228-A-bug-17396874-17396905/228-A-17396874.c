#include<stdio.h>

int main(int argc, char *argv[])
{
    int a[10],i,j,t,s=0;
    for(i=1;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0;i<3;i++)
    {
        for(j=0;j<4-i-1;j++)
        {
            if(a[j]>=a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        if(a[i]==a[i+1])
        {
            s++;
        }
    }
    printf("%d",s);
    return 0;
}
