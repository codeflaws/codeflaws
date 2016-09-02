#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<memory.h>
#include<assert.h>
#include<ctype.h>

#define ll long long
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
#define abs(k) (((k)>0)?(k):(-k))
#define mod(a,b) (((a)>=0)?((a)-(b)*((a)/(b))):((a)-(b)*((a)/(b)+1))
#define mset(a) memset(a,0,sizeof(a))
#define mcpy(a,b) memcpy(a,b,sizeof(a))
#define mcmp(a,b,n) memcmp(a,b,n)
#define inf (1<<30)
#define pi 3.14159265358979323846

void fileio_in_out()
{
     freopen(".in","r",stdin);
     freopen(".out","w",stdout);
}

void fileio_txt()
{
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
}

//========================================================

int m,n,k,t,zeros,actors;
int b[111111],least[111111],most[111111];
char s[111111];

int check(int j)
{
    int i,flag;
    
    flag=1;
    for(i=1;i<=n;i++)
      {
        if(i==j)
          continue;
        if(most[i]>least[j])
          {
            flag=0;
            break;
          }
      }
    if(flag)
      return 0;
    
    flag=0;
    for(i=1;i<=n;i++)
      {
        if(i==j)
          continue;
        if(least[i]>most[j])
          {
            flag=1;
            break;
          }
      }
    if(flag)
      return 1;
    
    return 2;
}

int main(int argc, char *argv[])
{
    //fileio_in_out();
    //fileio_txt();
    
    int i,j,l;
    
    mset(b);
    mset(least);
    mset(most);
    
    scanf("%d%d",&m,&k);
    for(i=1;i<=k;i++)
      {
        scanf("%d",&t);
        b[t]=1;
      }
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      {
        scanf("%s%d",s,&j);
        actors=0;
        zeros=0;
        for(l=1;l<=j;l++)
          {
            scanf("%d",&t);
            if(b[t])
              actors++;
            if(!t)
              zeros++;
          }
        least[i]=actors;
        if(zeros>=(m-k)-(j-actors-zeros))
          least[i]+=zeros-((m-k)-(j-actors-zeros));
        if(actors+zeros>k)
          most[i]=k;
          else most[i]=actors+zeros;
      }
    
    for(i=1;i<=n;i++)
      printf("%d\n",check(i));
    
    //system("pause");
    
}
