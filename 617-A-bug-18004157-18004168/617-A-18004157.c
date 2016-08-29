#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int x,i,sum=0;
    
    scanf("%d",&x);
    
    for(i=5;i>0;i--)
    while(x>0 && x>i)
    {
        x-=i;
        sum++;
    }
    
    printf("%d",sum);
return 0;
}
