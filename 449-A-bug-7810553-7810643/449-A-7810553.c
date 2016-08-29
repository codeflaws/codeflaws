#include<stdio.h>
int main(int argc, char *argv[])
{
    long long int n,m,k,max,min,rem,ans,var;
    scanf("%lld%lld%lld", &n, &m, &k);
    if(n>=m)
    {
        max = n;
        min = m;
    }
    else
    {
        max = m;
        min = n;
    }
    if(k<max)
    {
        if((min%(k+1)==0) && (k < min))
        {
            ans = (min/(k+1))*max;
        }
        else if(max%(k+1)==0)
            ans = (max/(k+1))*min;
        else
        {
            //if(k<min)
            ans = (min/(k+1))*max;
           // else
            //{
            var = (max/(k+1))*min;
            if(var>ans)
                ans = var;
            //}
        }
    }
    else
    {
        rem = k - (max-1);
//        printf("%lld\n", rem);
        if(rem < min)
        {
            if(min%(rem+1)==0)
                ans = min/(rem + 1);
            else
                ans = min%(rem + 1);
        }
        else
            ans = -1;
    }
    printf("%lld\n", ans);
    return 0;
}
