#include <stdio.h>
#define maxlen 105
int N;
int check(int s,int e,int col,int mx[][maxlen])
{
    int upi,downi,j,ok=0;
    if(e&1) return N;
    upi=(s+e)/2,downi=upi+1;
    while(upi>=1)
    {
        for(j=1;j<=col;j++)
         if(mx[upi][j]!=mx[downi][j]) {ok=1;break;}
        if(ok) break;
        upi--,downi++;
    }
    //printf("j=%d upi=%d\n",j,upi);
    if(!ok)
     if(e%2==1) return N/2;
     else return check(s,(s+e)/2,col,mx)/2;
    //printf("s=%d e=%d",s,e);
    return N;
}
int main(int argc, char *argv[])
{
   int n,m,mx[maxlen][maxlen],i,j,res;
   freopen("C:\\Users\\Shen\\Desktop\\in.txt","r",stdin);
   while(~scanf("%d%d",&n,&m))
   {
       N=n;
       for(i=1;i<=n;i++)
        for(j=1;j<=m;j++) scanf("%d",&mx[i][j]);
       if(n&1) printf("%d\n",n);
       else
       {
           res=check(1,n,m,mx);
           printf("%d\n",res);
       }
   }
   return 0;
}
