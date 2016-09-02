#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[])
{
    long long int l,r,i,k,t,a,b,c,ck=0;
    scanf("%lld %lld",&l,&r);
    if(l==r || l+1==r) printf("-1");
    else
    {
        for(i=2; i<=sqrt(l); i++)
        {
            while(l<r)
            {

                if(l%i==0)
                {
                    for(k=l+1; k<r; k++)
                    {
                        if(k%i!=0)
                        {
                            for(t=k+1; k<=r; k++)
                            {
                                if(t%i==0)
                                {
                                    a=l;
                                    b=k;
                                    c=t;
                                    ck=1;
                                    break;
                                }
                            }
                        }
                        if(ck==1) break;
                    }
                }
                if(ck==1) break;
                l++;
            }
            if(ck==1) break;
        }

        if(ck==1) printf("%lld %lld %lld",a,b,c);
        else printf("-1");
    }
return 0;
}
