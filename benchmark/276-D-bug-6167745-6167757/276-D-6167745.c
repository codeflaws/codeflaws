#include<stdio.h>
#include<math.h>
int bin1[100],bin2[100];
int main(int argc, char *argv[])
{
    long long l,r,m;
    scanf("%lld%lld",&l,&r);
    int no_of_elem1,no_of_elem2,i,time=0;
    while(l!=0)
    {
       m=1;i=0;
       while(m<=l)
            {
                m*=2;
                i++;
            }
        bin1[i-1]=1;
        if(time==0)
        no_of_elem1=i;
        time++;
        m/=2;
        l-=m;
    }
    time=0;
    while(r!=0)
    {
       m=1;i=0;
       while(m<=r)
            {
                m*=2;
                i++;
            }
        bin2[i-1]=1;
        if(time==0)
        no_of_elem2=i;
        time++;
        m/=2;
        r-=m;
    }
    if(no_of_elem2>no_of_elem1)
            printf("%lld",(long long)(pow(2,no_of_elem2))-1);
    else
    {
        i=no_of_elem2;
        while(i>=0&&bin1[i]==bin2[i])
            i--;
        printf("%lld",(long long)(pow(2,i))-1);
    }
    return 0;
}
