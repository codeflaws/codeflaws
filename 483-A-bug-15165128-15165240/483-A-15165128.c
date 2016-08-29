#include<stdio.h>
int main(int argc, char *argv[])
{
    long long l,r,a,p,b,c,h,i,j,m=0,q;
    int t=0,k=0;
    scanf("%lld%lld",&l,&r);
    p=l;
    
    while(p<r-1)
    {
         for(h=2;h<8;h++)
    {
        if(p%h==0)
        break;
    }
        q=p+h;
    while(q<=r)
    {
        for(i=h;i<=p;i+h)
        {
            if(p%i==0&&q%i==0)
            {
            a=p;
            c=q;
            j=p+1;
            while(j<c)
            {
                k=0;
                m=2;
                while(m<h)
                {
        if((a%m==0&&j%m==0)||(c%m==0&&j%m==0))           
                    {
                        k=1;
                    }     
                    else
                    k=0;
                    if(k==1)
                    break;
                m++;    
                }
                if(k==0)
                {
                    printf("%lld %lld %lld",a,j,c);
                    t=1;
                }
                if(t==1)
                break;
            j=j+1;  
              }
                
            }
            if(t==1)
            break;
        }
        if(t==1)
        break;
        q++;
    }
    if(t==1)
    break;
    p++;
}

if(t==0)
printf("-1");
return 0;
}