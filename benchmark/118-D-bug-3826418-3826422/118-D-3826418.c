#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a>b)?b:a)
#define upfor(i,From,To) for(i=From;i<To;i++)
#define downfor(i,From,To) for(i=From;i>To;i--)
#define Opfile_in(s) freopen(s,"r",stdin)
#define Opfile_out(s) freopen(s,"w",stdout)
#define Read(T) scanf("%d",&T)
#define Print(T) printf("%d\n",T)
#define LL long long
#define MAXN 214748364
#define mod 100000000
int N1,N2,k1,k2;
int F[102][102],G[102][102];
void init();
void doit();
int main(int argc, char *argv[])
{
    //Opfile_in("BUAA_temp.in");
    init();
    doit();
    return 0;
}
void init()
{
    scanf("%d%d%d%d",&N1,&N2,&k1,&k2);
}
void doit()
{
    int i,j,k,l;
    F[0][0]=G[0][0]=1;
    upfor(i,0,N1+1)
    upfor(j,0,N2+1)
    {
        upfor(l,1,k1+1)
        {
            F[i+l][j] += G[j][i];
            F[i+l][j] %= mod;
        }
        upfor(l,1,k2+1)
        {
            G[j+l][i] += F[i][j];
            G[j+l][i] % mod;
        }
    }
    Print((F[N1][N2]+G[N2][N1]) % mod);
}
