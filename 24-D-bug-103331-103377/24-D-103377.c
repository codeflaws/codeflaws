#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

int x,y,sx,sy;
double dp[1100][1100], tmp;

double ab(double x){ if(x<0) return -x; return x; }

int main(int argc, char *argv[]){
  int i,j,k,l,m,n,loop,loop_mx;
  double per;

  scanf("%d%d%d%d",&x,&y,&sx,&sy);
  sx--; sy--;

  if(y==1){ printf("%.10lf\n",2.0*(x-1-sx)); return 0; }

  if(y==1) per = 3;
  else     per = (3+3+4*(y-2))/(double)y;
  
  rep(i,x) rep(j,y) dp[i][j]=(x-1-i)*per;

  loop_mx = 90000000 / x / y;

  for(i=x-2;i>=0;i--){
    rep(loop,loop_mx){
      double err=0;
      rep(j,y){
        if(j==0)        tmp = (dp[i+1][j] + dp[i][j] + dp[i][j+1])/3;
        else if(j==y-1) tmp = (dp[i+1][j] + dp[i][j] + dp[i][j-1])/3;
        else            tmp = (dp[i+1][j] + dp[i][j] + dp[i][j-1] + dp[i][j+1])/4;
        tmp += 1;
        err += ab(dp[i][j]-tmp);
        dp[i][j]=tmp;
      }
    }
  }

  printf("%.10lf\n",dp[sx][sy]);

  return 0;
}
