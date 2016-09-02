#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

#define ll long long

int solve(int st, int x[], int n, ll step){
  int i;
  int now = st;

  now = st;
  rep(i,step){
    if(i && i%n==0 && now==st){
      step %= i; i=0;
      if(step==0) break;
    }
    now += 2*(x[i%n]-now);
  }
  return now;
}

int x[100001], y[100001];
int main(int argc, char *argv[]){
  int i,j,k,l,m,n;
  int sx,sy,ex,ey;
  ll step;

  scanf("%d%I64lld",&n,&step);
  scanf("%d%d",&sx,&sy);
  rep(i,n) scanf("%d%d",x+i,y+i);

  ex = solve(sx,x,n,step);
  ey = solve(sy,y,n,step);

  printf("%d %d\n",ex,ey);

  return 0;
}
