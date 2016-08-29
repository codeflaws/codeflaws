#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

#define ll long long

void unionInit(int d[],int s){int i;rep(i,s)d[i]=i;}
int unionGet(int d[],int n){int t=n,k;while(d[t]!=t)t=d[t];while(d[n]!=n)k=d[n],d[n]=t,n=k;return n;}
int unionConnect(int d[],int a,int b){a=unionGet(d,a);b=unionGet(d,b);if(a==b)return 0;d[a]=b;return 1;}

ll pw(ll a,ll b, ll md){
  ll r;
  if(!b) return 1;
  r = pw(a,b/2,md);
  r = (r*r)%md;
  if(b%2) r = (r*a)%md;
  return r;
}

int ind[110000], num[110000], g;

int main(int argc, char *argv[]){
  int i,j,k,l,m,n;
  int MOD;
  ll res;

  scanf("%d%d%d",&n,&m,&MOD);
  unionInit(ind,n);
  while(m--){
    scanf("%d%d",&i,&j);
    unionConnect(ind,i-1,j-1);
  }

  rep(i,n) num[i] = 0;
  rep(i,n) num[unionGet(ind,i)]++;
  g = 0;
  res = 1;

  rep(i,n) if(num[i]){
    res *= num[i];
    res %= MOD;
    g++;
  }
  if(g==1){
    res = 1 % MOD;
  } else {
    res *= pw(n, g-2, MOD);
    res %= MOD;
  }
  printf("%d\n",(int)res);

  return 0;
}
