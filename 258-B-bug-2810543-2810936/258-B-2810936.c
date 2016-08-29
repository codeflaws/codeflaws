#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

#define ll long long
#define M 1000000007

void extended_euclid(ll x,ll y,ll *c,ll *a,ll *b){
  ll a0,a1,a2,b0,b1,b2,r0,r1,r2,q;
  r0=x; r1=y; a0=1; a1=0; b0=0; b1=1;
  while(r1>0){
    q=r0/r1; r2=r0%r1; a2=a0-q*a1; b2=b0-q*b1;
    r0=r1; r1=r2; a0=a1; a1=a2; b0=b1; b1=b2;
  }
  *c=r0; *a=a0; *b=b0;
}

ll get_inv(ll n, ll p){
  ll a,b,c;
  extended_euclid(n,p,&c,&a,&b);
  if(a<p) a+=p;
  return a%p;
}

int m;
ll num[11];
ll dp[11][11][2];
ll inv[30];
ll pw[30];

ll solve(int depth, int used, int fg){
  int i, ed;
  int d;
  int nused, nfg;
  ll res = 0;

  if(used < 0) return 0;

  if(depth == -1){
    if(used==0) return 1;
    return 0;
  }

  if(dp[depth][used][fg] >= 0) return dp[depth][used][fg];

  d = (m / pw[depth])%10;
  ed = d;
  if(fg) ed = 9;

  rep(i,ed+1){
    nused = used;
    nfg = fg;
    if(i < ed) nfg = 1;
    if(i==4||i==7) nused--;

    res += solve(depth-1, nused, nfg);
  }

  return dp[depth][used][fg] = res;
}

ll get_p(int a, int b){
  int i; ll res = 1;
  rep(i,b){
    res = (res * (a-i))%M;
  }
  return res;
}

ll dp2[100];

int main(int argc, char *argv[]){
  int i,j,k,l,n;
  int a,b,c,d,e,f;
  int cnt[11];
  ll res = 0, add, sum;

  scanf("%d",&m);

  REP(i,1,30) inv[i] = get_inv(i, M);
  pw[0] = 1;
  REP(i,1,30) pw[i] = pw[i-1] * 10;

  rep(i,11) rep(j,11) rep(k,2) dp[i][j][k] = -1;
  rep(i,11) num[i] = solve(10, i, 0);
  num[0]--;

  rep(i,100) dp2[i] = 0;
  rep(a,10) rep(b,10) rep(c,10) if(a+b+c<=11) rep(d,10) rep(e,10) if(a+b+c+d+e<=11) rep(f,10){
    k = a+b+c+d+e+f;
    if(k > 11) continue;
    
    rep(i,10) cnt[i] = 0;
    cnt[a]++; cnt[b]++; cnt[c]++; cnt[d]++; cnt[e]++; cnt[f]++;

    add = 1;
    rep(i,10) add = (add * get_p(num[i], cnt[i]))%M;
    
    dp2[k] = (dp2[k] + add)%M;
  }
  
  REP(i,1,11){
    add = num[i];
    sum = 0;
    rep(j,i) sum += dp2[j];
    sum %= M;
    res += sum * add;
    res %= M;
  }

  if(res < 0) res += M;
  printf("%d\n",(int)res);

  return 0;
}
