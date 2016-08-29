#include<stdio.h>
int main(int argc, char *argv[])
{

    long long int n,m,expense=0,i;
    scanf("%lld%lld",&n,&m);
    long long int t[n],T[n],x[n],cost[n];
    for(i=0;i<n;i++)
        {scanf("%lld%lld%lld%lld",&t[n],&T[n],&x[n],&cost[n]);
          if(T[n]==t[n]||t[n]>T[n])
          expense+=(m*x[n]+cost[n]);
          else
             {
                  if(m>(T[n]-t[n]))
                   {
                if((m*x[n]+cost[n])>(cost[n])*((m+T[n]-t[n]-1)/(T[n]-t[n])))
                expense+=((m+T[n]-t[n]-1)/(T[n]-t[n]))*cost[n];
                else
                expense+=(m*x[n]+cost[n]);}
                else
                    expense+=cost[n];}}
                        printf("%lld",expense);
                        return 0;
    }
