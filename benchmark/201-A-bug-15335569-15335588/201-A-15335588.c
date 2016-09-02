#include<stdio.h>
int d[50];
int main(int argc, char *argv[])
{
    int n,i;
    d[1]=1;
    d[3]=4;
    for(i=5;i<50;i+=2)
        d[i]=(i/2)*(i/2)+((i+1)/2)*((i+1)/2);
    scanf("%d",&n);
    if(n==1)
    {
        printf("1");
        return 0;
    }
    else if(n<=5 && n!=3)
    {
        printf("3");
        return 0;
    }
    for(i=5;i<50;i+=2)
    {
        if(n<=d[i])
        {
            printf("%d",i);
            return 0;
        }
    }
}
