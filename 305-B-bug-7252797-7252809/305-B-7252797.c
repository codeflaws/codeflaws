#include<stdio.h>
int main(int argc, char *argv[])
{

    long long p,q,n,a,t,i,num1,den1,den,num;
    scanf("%lld%lld",&p,&q);
    scanf("%lld",&n);


    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a);
        if(q==0||a>(p/q))
      {
          printf("NO");
      return 0;}

        p=p-a*q;
        p=t;
        p=q;
        q=t;
    }
    if(q)
    printf("NO");
    else
    printf("YES");




    return 0;
}
