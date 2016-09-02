#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

char *in[2100]; int len[2100];
int con[2100];
int *next[26][2100];

int m_st, mm_st;
char c_arr[1100000];
int i_arr[31100000];

int nf_fg[2100][26];

int main(int argc, char *argv[]){
  int i,j,k,l,m,n;
  int dp1[2100], dp2[2100], mx;
  char go[2100]; int go_len, go_now; int gn;
  int n1, n2;
  int dame = -1;

  m_st = mm_st = 0;

  scanf("%d",&n);
  rep(i,n){
    in[i] = c_arr + m_st;
    scanf("%s",in[i]);
    len[i] = strlen(in[i]);
    m_st += len[i] + 2;
    rep(j,26){
      next[j][i] = i_arr + mm_st;
      mm_st += len[i] + 2;
    }
  }

  rep(i,n){
    rep(j,26) next[j][i][len[i]] = len[i];
    for(k=len[i]-1;k>=0;k--){
      rep(j,26) next[j][i][k] = next[j][i][k+1];
      next[in[i][k]-'a'][i][k] = k;
    }
  }

  scanf("%d",&m);
  rep(i,m) scanf("%d",con+i), con[i]--;

  mx = 0;
  dp1[0] = 0; dp2[0] = 0; rep(j,26) nf_fg[0][j] = 0;

  scanf("%s",&go);
  go_len = strlen(go);
  
  rep(go_now,go_len){
/*  printf("go_now = %d\n",go_now);*/
    gn = go[go_now] - 'a';
    for(i=mx; i>=0; i--){
      if(nf_fg[i][gn]) continue;
      n1 = dp1[i];
      n2 = dp2[i];
/*      printf("%d : %d %d -> ",i,n1,n2);*/
      while(n1 != dame){
        if(n1==m){ n1=dame; break; }
        if(next[gn][con[n1]][n2] < len[con[n1]]){
          n2 = next[gn][con[n1]][n2] + 1;
          if(n2 == len[con[n1]]) n1++, n2=0;
          break;
        } else {
          n1++;
          n2=0;
        }
      }
/*      printf("%d %d\n",n1,n2);*/
      if(n1 == dame || (i!=mx && n1 > dp1[i+1] || (n1==dp1[i+1] && n2>=dp2[i+1]))){
        nf_fg[i][gn] = 1;
        continue;
      }
      dp1[i+1] = n1;
      dp2[i+1] = n2;
      rep(j,26) nf_fg[i+1][j] = 0;
      if(i==mx) mx++;
    }
  }

  printf("%d\n",mx);

  return 0;
}
