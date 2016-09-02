#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

int dp[200][3][3];
int fg[3000];

int debug = 0;
int mp[200][2];

int get_grundy(int n){
  int i, j, k;
  int all, up, down;
  
  k = 0;
  rep(i,n){
    if(mp[i][0] && mp[i][1]) continue;

    all = up = down = 0;
    if(!mp[i][0] && !mp[i][1]) all++;
    else if(!mp[i][0]) up = 1;
    else if(!mp[i][1]) up = 2;

    while(i<n){
      i++;
      if(i>=n) break;
      if(mp[i][0] || mp[i][1]){
        if(mp[i][0] && mp[i][1]) break;
        if(!mp[i][0]) down = 1;
        if(!mp[i][1]) down = 2;
        break;
      } else {
        all++;
      }
    }

    if(debug) printf("%d %d %d\n",all,up,down);
    k ^= dp[all][up][down];
  }
  return k;
}

int main(int argc, char *argv[]){
  int i,j,k,l,m,n;

  int all, up, down;
  int a, b;

  rep(all,103) rep(up,3) rep(down,3){
    rep(i,3000) fg[i] = 0;

    n = all + 2;
    rep(i,n) rep(j,2) mp[i][j] = 0;
    if(up!=1) mp[0][0] = 1;
    if(up!=2) mp[0][1] = 1;
    if(down!=1) mp[n-1][0] = 1;
    if(down!=2) mp[n-1][1] = 1;

    rep(i,n) rep(j,n) if(mp[i][j]==0){
      mp[i][j]++;
      if(i-1 >= 0) mp[i-1][1-j]++;
      mp[i][1-j]++;
      if(i+1 <  n) mp[i+1][1-j]++;

      fg[get_grundy(n)]++;

      mp[i][j]--;
      if(i-1 >= 0) mp[i-1][1-j]--;
      mp[i][1-j]--;
      if(i+1 <  n) mp[i+1][1-j]--;
    }

    rep(i,3000) if(!fg[i]) break;
    dp[all][up][down] = i;
  }

  scanf("%d%d",&n,&m);
  rep(i,n) rep(j,2) mp[i][j] = 0;
  while(m--){
    scanf("%d%d",&i,&j); i--; j--;
    mp[i][j] = 1;
    if(i-1 >= 0) mp[i-1][1-j] = 1;
    mp[i][1-j] = 1;
    if(i+1 < n ) mp[i+1][1-j] = 1;
  }

  debug = 0;
/*  rep(i,n){ rep(j,2) printf("%d",mp[i][j]); puts(""); }*/
  k = get_grundy(n);

  if(k==0) puts("LOSE");
  else     puts("WIN");

  return 0;
}
