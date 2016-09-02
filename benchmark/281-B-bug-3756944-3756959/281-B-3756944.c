#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a>b)?b:a)
#define UpFor(i,From,To) for(i=From;i<To;i++)
#define DownFor(i,From,To) for(i=From;i>To;i--)
#define Opfile_in(s) freopen(s,"r",stdin)
#define Opfile_out(s) freopen(s,"w",stdout)
#define Read(T) scanf("%d\n",&T)
#define Print(T) printf("%d\n",T)
#define LL long long
#define MAXN 214748364
int X,Y,N;
void init();
void doit();

int main(int argc, char *argv[])
{
    //Opfile_in("CF_temp.in");
    init();
    doit();
    return 0;
}
void init()
{
    scanf("%d%d%d",&X,&Y,&N);
}
void doit()
{
    int i,ansx=100000,ansy=1,k;
    UpFor(i,1,N+1)
    {
        k=i*X/Y;
        if(fabs(i*X-k*Y)*ansy<fabs(ansy*X-ansx*Y)*i)
        {
            ansx=k;ansy=i;
        }
        k++;
        if(fabs(i*X-k*Y)*ansy<fabs(ansy*X-ansx*Y)*i)
        {
            ansx=k;ansy=i;
        }
    }
    printf("%d/%d\n",ansx,ansy);
}
