#include<stdio.h>
#include<string.h>
#include<math.h>
int main(int argc, char *argv[])
{
    long long int a,b,i,sum=0,c,d,e;
    scanf("%lld %lld",&a,&b);
    e = a - b;
    d = sqrt(e) + 1;
    if(a<b)printf("0");
    else if(a==b)printf("infinity");
    else
    {
        for(i=1;i<=d;i++){
            if(e%i==0){
                c = e/i;
                if(i!=c){
                if(i>b)sum++;
                if(c>b)sum++;
                }
                else{
                    if(i>b)sum++;
                }
            }
        }
      //  if(sum==0)printf("1");
        printf("%lld",sum);
    }

    return 0;
}

