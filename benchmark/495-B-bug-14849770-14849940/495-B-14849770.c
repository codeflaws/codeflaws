#include<math.h>
#include<stdio.h>
int main(int argc, char *argv[])
{
    long long a,b,count=0;
    scanf("%lld %lld",&a,&b);
    if(a==b){
        printf("infinity");
        return 0;}
    if(a<b)
        count=0;
    else {

        long long ans=a-b,i;

        for(i=1;i<=sqrt(ans);i++)
        {
            if(ans%i==0)
            {
               if(ans/i>b)
                count++;
                if(i>b)
                    count++;
        }
    }}
    printf("%lld",count);
    return 0;
}
