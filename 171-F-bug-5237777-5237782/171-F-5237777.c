#include<stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
    long long a=10,b,c,result=0,t,count=1,count2=1,count3=1,count4=1,i;
    long long sushu[100000],emirp[2222],emirp2[2222],prime[2222];
    while(a<=999984)
    {
        b=sqrt(a);
        for(c=2;c<=b;c++)
        {if(a%c==0)
        break;}
        if(c>b)
        {

            sushu[count++]=a;
        }
        a++;
    }

    for(i=1;i<count;i++)
    {
        result=0;
        t=sushu[i];
        while(t!=0)
        {
            result=10*result+t%10;
            t/=10;
        }
        if(result!=sushu[i])
                {emirp[count2++]=result;
                }
    }
    for(a=1;a<count2;a++)
    {
        b=sqrt(emirp[a]);
        for(c=2;c<=b;c++)
        {if(emirp[a]%c==0)
        break;}
        if(c>b)
        {
            emirp2[count3++]=emirp[a];
        }
    }
    for(i=1;i<count3;i++)
    {
        result=0;
        t=emirp2[i];
        while(t!=0)
        {
            result=10*result+t%10;
            t/=10;
        }
        if(result!=emirp2[i])
                {prime[count4++]=result;
                }
    }
    int o;
    scanf("%d",&o);
    printf("%lld",prime[o]);
return 0;
}
