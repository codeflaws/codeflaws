#include <stdio.h>

#define oo 200000000000000000LL

long long dist[1006][1006]={0};

long e[5005]={0};
long last[5005]={0};
long totm=0;
long now[1006]={0};
long long value[5005]={0};
long long f[5005]={0};

long n,stx,sty;

long hash[5005]={0};
long dui[5005]={0};

long long c[1006]={0};
long long t[1006]={0};

void spfa(long x,long long dist[])
{
 long i;
 long closed=2000000,open=2000000;
 
 for(i=1;i<=n;i++)
   dist[i]=oo;
 dist[x]=0;
 
 dui[(open++)&1023]=x;
 hash[x]=1;
 for(;closed<open;)
   {
    x=dui[(closed++)&1023];
    hash[x]=0;
    
    for(i=now[x];i;i=last[i])
      if(dist[x]+value[i]<dist[e[i]])
       {
        dist[e[i]]=dist[x]+value[i];
        if(!hash[e[i]])
         {
          hash[e[i]]=1;
          if(dist[e[i]]<dist[dui[closed&1023]])
           dui[(--closed)&1023]=e[i];
          else
           dui[(open++)&1023]=e[i];
         }
       }
   }
}

int main(int argc, char *argv[])
{
 long m,i,j;
 long x,y,k;
 long long v;
 long long min=oo;
 
 scanf("%ld%ld",&n,&m);
 scanf("%ld%ld",&stx,&sty);
 for(i=1;i<=m;i++)
   {
    scanf("%ld%ld",&x,&y);
    scanf("%I64d",&v);
    e[++totm]=y;
    last[totm]=now[x];now[x]=totm;
    value[totm]=v;
    
    e[++totm]=x;
    last[totm]=now[y];now[y]=totm;
    value[totm]=v;
   }
 
 for(i=1;i<=n;i++)
   spfa(i,dist[i]);
 for(i=1;i<=n;i++)
   {
    scanf("%I64d%I64d",&t[i],&c[i]);
    f[i]=oo;
   }
 f[stx]=0;
 for(i=1;i<=n;i++)
   {
    for(j=1,min=oo,x=0;j<=n;j++)
      if(f[j]<min&&!hash[j])
       {
        min=f[j];
        x=j;
       }
    if(min>=oo)
     {
      printf("-1\n");
      return 0;
     }
    if(x==sty)
     {
      printf("%I64d\n",min);
      return 0;
     }
    hash[x]=1;
    for(j=1;j<=n;j++)
      if(dist[x][j]<=t[x]&&f[x]+c[x]<f[j]&&!hash[j])
       f[j]=f[x]+c[x];
   }
 
 return 0;
}
