#include<stdio.h>
#include<math.h>

int isprime(int n);
int main(int argc, char *argv[])
{
        int n,c;
        scanf("%d",&n);
        for(c=3;c<10000000;c+=2)
        {
                if(isprime(c))
                {
                        int k=n-1;
                        if(k==0) printf("%d",c);
                        else printf("%d ",c);
                        n--;
                        if(n==0) break;
                }
        }
        return 0;
}

int isprime(int n)
{
        int c,val=sqrt(n);
        for(c=3;c<val;c+=2)
        {
                if(n%c==0) return 0;
        }
        return 1;
}
