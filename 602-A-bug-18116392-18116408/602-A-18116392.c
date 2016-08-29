#include<stdio.h>
#include<math.h>

long long pawah(long long n,long long b);
int main(int argc, char *argv[])
{
        long long i,nx,bx,c,ny,by;
        scanf("%lld %lld",&nx,&bx);
        long long xb,xd=0;
        for(c=0,i=pawah(bx,nx-1);c<nx;c++,i/=bx)
        {
                scanf("%lld",&xb);
                xd+=xb*i;
        }

        scanf("%lld %lld",&ny,&by);
        long long yb,yd=0;

        for(c=0,i=pawah(by,ny-1);c<ny;c++,i/=by)
        {
                scanf("%lld",&yb);
                yd+=yb*i;
        }
        printf("%lld %lld",xd,yd);
        if(xd>yd) printf(">");
        else if(xd<yd) printf("<");
        else printf("=");
        return 0;
}

long long pawah(long long n,long long b)
{
        long long x=1,c;
        for(c=0;c<b;c++)
        {
                x*=n;
        }
        return x;
}
