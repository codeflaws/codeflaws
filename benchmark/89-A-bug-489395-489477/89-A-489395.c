#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

#define ll long long

int main(int argc, char *argv[]){
  int i,j,k,l,m,n;
  int in[10000];
  int mx, per;
  ll res;

  while(scanf("%d%d%d",&n,&m,&k)==3){
    rep(i,n) scanf("%d",in+i);
    if(n%2==0){puts("0"); continue;}

    mx = in[0];
    for(i=2;i<n;i+=2) if(mx > in[i]) mx = in[i];

    per = (n+1) / 2 / m;
    res = per * (ll)k;

    if(res > mx) res = mx;
    printf("%d\n",(int)res);
  }

  return 0;
}
