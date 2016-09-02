#include<stdio.h>
int fun(int);
int main(int argc, char *argv[])
{
    int s,n;
    scanf("%d",&n);
    if(n>=2013)
    {
        n=n+1;
        s=fun(n);
        printf("%d",s);
    }
    else
    {
        printf("2013");
    }
    return 0;
}
int fun(int n)
{
    int s,a,b,c,d;
        s=n;
        d=s%10;
        s=s/10;
        c=s%10;
        s=s/10;
        b=s%10;
        s=s/10;
        a=s%10;
        if(a==b)
        {
            n=n/100;
            n++;
            n=n*100;
            fun(n);
        }
        else if(a==c)
        {
             n=n/10;
            n++;
            n=n*10;
            fun(n);
        }
        else if(a==d)
        {
          n++;
          fun(n);
        }
        else if(c==b)
        {
             n=n/10;
            n++;
            n=n*10;
            fun(n);
            
        }
        else if(d==b)
        {
            n++;
            fun(n);
        }
        else if(c==d)
        {
            n++;
            fun(n);   
        }
        else
        {
            return n;
        }
}