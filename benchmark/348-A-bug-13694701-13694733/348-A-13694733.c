#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[])
{

     long long n;
     scanf("%lld",&n);
     long long max = 0;
     long long sum =0;
     long long i;
     for(i=0;i<n;i++)
        {
           long long temp;
           scanf("%lld",&temp);
           sum += temp;
           if(temp>max)
             {
                max =temp;
             }
        }



    long long rounds = (long long)ceil((double)sum/(n-1));
     if(rounds<max)
       rounds = max;

     printf("%lld\n",rounds);

     return 0;

}

