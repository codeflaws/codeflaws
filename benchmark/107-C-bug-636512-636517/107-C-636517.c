#include <stdio.h>
#include <string.h>
#define lowbit(a) ((a)&(-(a)))

int rec[17],pos[17],ans[17],v[65537];
long long f[65537];
int n;

long long work(int s)
{
   int i,j;
   memset(f,0,sizeof(f));
   memset(pos,0,sizeof(pos));
   for (i=1;i<=s;i++)
      pos[ans[i]]=i;
   f[0]=1;
   for (i=0;i<(1<<n)-1;i++)
      if (f[i])
         for (j=1;j<=n;j++)
            if (!(i&(1<<j-1))&&(!pos[v[i]+1]||pos[v[i]+1]==j)&&(i&rec[j])==rec[j])
               f[i+(1<<j-1)]+=f[i];
   return f[(1<<n)-1];
}

int main(int argc, char *argv[])
{
   int i,j,a,b,m,s=0;
   long long k,t;
   scanf("%d%I64d%d",&n,&k,&m);
   for (i=1;i<1<<n;i++)
      v[i]=v[i-lowbit(i)]+1;
   for (i=1;i<=m;i++)
   {
      scanf("%d%d",&a,&b);
      rec[b]|=(1<<a-1);
   }
   if (work(0)<k-2000)
      puts("The times have changed");
   else
      for (i=1;i<=n;i++)
         for (j=1;j<=n;j++)
            if (!(s&(1<<j-1)))
            {
               ans[i]=j;
               t=work(i);
               if (t>=k-2000)
               {
                  s+=(1<<j-1);
                  printf("%d%c",j,(i==n)?'\n':' ');
                  break;
               }
               k-=t;
            }
   return 0;
}
