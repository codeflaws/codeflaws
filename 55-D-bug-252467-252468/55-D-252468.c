#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

#define ll long long
#define M 2520

int GCD(int a,int b){int r; while(a){r=b; b=a; a=r%a;} return b;}
int LCM(int a,int b){ return a/GCD(a,b)*b; }

ll *dp1, *dp2, *nx1, *nx2, *swap;
ll dp1__[M], dp2__[M];
ll nx1__[M], nx2__[M];

ll dp[323][M];
int bc[323];

int nex[M][10];

ll solve(ll mx){
  int i,j,k,mask,use[10],us,now,nn;
  int go[20],gos,g;
  ll res;

  dp1=dp1__; dp2=dp2__; nx1=nx1__; nx2=nx2__;

  gos=0;
  while(mx) go[gos++]=mx%10, mx/=10;

  rep(mask,1<<8){
    if( (mask&1<<2) && !(mask&1<<0) ) continue;
    if( (mask&1<<4) && (!(mask&1<<0)||!(mask&1<<1)) ) continue;
    if( (mask&1<<6) && (!(mask&1<<0)||!(mask&1<<2)) ) continue;
    if( (mask&1<<7) && !(mask&1<<1) ) continue;
    us=2; use[0]=0; use[1]=1;
    rep(i,8) if(mask&1<<i) use[us++]=i+2;

    rep(i,M) dp1[i]=dp2[i]=0;
    dp1[0]=1;

    rep(i,M) rep(j,us) nex[i][j] = (i*10+use[j])%M;

    for(now=gos-1;now>=0;now--){
      rep(i,M) nx1[i]=nx2[i]=0;

      rep(i,M) if(dp2[i]) rep(k,us) nx2[nex[i][k]] += dp2[i];
      
      rep(i,M) if(dp1[i]) rep(k,us){
        if(go[now]==use[k]) nx1[nex[i][k]] += dp1[i];
        if(go[now]> use[k]) nx2[nex[i][k]] += dp1[i];
      }

      swap=dp1, dp1=nx1, nx1=swap;
      swap=dp2, dp2=nx2, nx2=swap;
    }

    rep(i,M) dp[mask][i] = dp1[i] + dp2[i];
  }

  res = 0;
  rep(mask,1<<8){
    g=1;
    rep(i,8) if(mask&1<<i) g=LCM(g,i+2);
    
    rep(i,mask+1) if( (i&mask)==i ){
      for(j=0;j<M;j+=g){
        if( (bc[mask] - bc[i])%2 ) res -= dp[i][j];
        else                       res += dp[i][j];
      }
    }
  }

  return res;
}

int main(int argc, char *argv[]){
  int i,j,k,l,n;
  ll a, b, res;
  int size;

  bc[0]=0;
  REP(i,1,1<<8) bc[i] = bc[i&(i-1)]+1;

  scanf("%d",&size);
  while(size--){
    scanf("%I64d%I64d",&a,&b);
    res = solve(b) - solve(a-1);
    printf("%I64d\n",res);
  }

  return 0;
}
