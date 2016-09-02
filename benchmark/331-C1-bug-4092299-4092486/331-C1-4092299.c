#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int n,i,arr[6],count=0;
    scanf("%d",&n);
    if(n==0)
    printf("0");
    else if(n<10)
    printf("1");
    else
    {
        int n1=n;
        while(n1)
        {
            count++;
            int arr[6]={0};
            for(i=0;i<6;i++)
                {
                    if(n)
                    {arr[i]=n%10;
                    n/=10;}
                }
            int max=0;
            for(i=0;i<6;i++)
            if(max<arr[i])
                max=arr[i];
        n1-=max;
        n=n1;
        }
        printf("%d",count);
    }
    //printf("Hello world!\n");
    return 0;
}
