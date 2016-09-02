#include <stdio.h>
int main(int argc, char *argv[])
{
    long long int n;
    scanf("%lld", &n);
    int count=0;
    while(count<=10)
    {
        long long int temp=n+1, k=0;
        if(temp<0)
            temp*=-1;
        //printf("%lld\n", temp);
        while(temp!=0)
        {
            k=temp%10;
            //printf("count=%d k=%lld\n", count, k);
            if(k==8)
                break;
            temp/=10;
        }
        if(k==8)
        {   
            //printf("reached here with k=%lld\n", k);
            break;
        }
        n+=1;
        count++;
    }
    printf("%d\n", count+1);
    return 0;
}