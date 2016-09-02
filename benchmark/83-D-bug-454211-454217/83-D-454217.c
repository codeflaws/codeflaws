#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

#define ll long long
#define N 44791

int getPrime(int n,int p[]){int i,j,n2=n/2;rep(i,n2)p[i]=1;for(i=3;i*i<n;i+=2)if(p[i>>1])for(j=(i*i)>>1;j<n2;j+=i)p[j]=0;j=1;p[0]=2;REP(i,1,n2)if(p[i])p[j++]=i*2+1;return j;}
int ps, p[N];

ll res, pp;
int a,b,n;

void solve(ll now, int st, int num){
  int i,j,k;
  ll send, add;

  add = b / now - (a-1) / now;
  if(num%2) add *= -1;
  res += add;
  
  REP(i,st,pp){
    send = now * p[i];
    if(send > b) break;
    solve(send, i+1, num+1);
  }
}

int is_prime(int n){
  int i;
  rep(i,ps){
    if(p[i]*p[i] > n) break;
    if(n%p[i]==0) return 0;
  }
  return 1;
}

int main(int argc, char *argv[]){
  int i,j,k,l,m;

  ps = getPrime(N,p);

  while(scanf("%d%d%d",&a,&b,&n)==3){
    rep(i,ps) if(n==p[i]) break;
    if(i==ps){
      if(a<=n && n<=b && is_prime(n)) puts("1"); else puts("0");
      continue;
    }

    pp = i;
    res = 0;
    solve(n,0,0);

    printf("%d\n",(int)res);
  }

  return 0;
}
