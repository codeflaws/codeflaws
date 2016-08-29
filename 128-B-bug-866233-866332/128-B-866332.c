#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

#define ll long long
void llIntSort(ll d[],int m[],int s){int i,j,a;ll k,t;if(s<=1)return;k=(d[0]+d[s-1])/2;i=-1;j=s;for(;;){while(d[++i]<k);while(d[--j]>k);if(i>=j)break;t=d[i];d[i]=d[j];d[j]=t;a=m[i];m[i]=m[j];m[j]=a;}llIntSort(d,m,i);llIntSort(d+j+1,m+j+1,s-j-1);}

void charCreateSuffixArray(char t[], int n, int res[], void *WorkMemory) {
  int i, h, *g, *b; ll *d;

  g = (int*)WorkMemory; WorkMemory = (void*)(g+n+1);
  b = (int*)WorkMemory; WorkMemory = (void*)(b+n+1);
  d = (ll*) WorkMemory;
  
  rep(i,n+1) res[i] = i, d[i] = g[i] = t[i];
  b[0] = 0; b[n] = 0;

  llIntSort(d,res,n+1);
  for(h=1;b[n]!=n;h*=2){
    rep(i,n+1){
      d[i] = g[res[i]] * (1LL<<32);
      if(res[i]+h<n+1) d[i] += g[res[i]+h];
    }
    llIntSort(d,res,n+1);
    rep(i,n){ b[i+1]=b[i]; if(g[res[i]]!=g[res[i+1]]||g[res[i]+h]!=g[res[i+1]+h]) b[i+1]++; }
    rep(i,n+1) g[res[i]]=b[i];
  }
}

void charCreateLCPFromSA(char *t, int n, int *SA, int *res, void *WorkMemory) {
  int i, j, h=0, *b;

  b = (int*)WorkMemory;

  rep(i,n+1) b[SA[i]]=i;
  rep(i,n+1){
    if(b[i]){
      for(j=SA[b[i]-1];j+h<n&&i+h<n&&t[j+h]==t[i+h];h++);
      res[b[i]]=h;
    }else res[b[i]] = -1;
    if(h>0)h--;
  }
}

char in[200000];
int SA[200000], LCP[200000], len[200000];

int main(int argc, char *argv[]){
  int i,j,k,l,m,n,ok;
  void *mem = malloc(10000000);

  while(scanf("%s%d",in,&m)==2){
    n = strlen(in);
    charCreateSuffixArray(in, n, SA, mem);
    charCreateLCPFromSA(in, n, SA, LCP, mem);

    rep(i,n+1) len[i] = n-SA[i];
/*    rep(i,n+1) printf("%d %d %d %d\n",i,SA[i],LCP[i],len[i]);*/
    
    m--; ok = 0;
    REP(i,1,n+1){
      REP(j,LCP[i]+1,len[i]+1){
        REP(k,i,n+1){
          if(k>i && LCP[k]<j) break;
          if(!m){
            rep(l,j) putchar(in[SA[i]+l]);
            ok = 1; break;
          } else {
            m--;
          }
        }
        if(ok) break;
      }
      if(ok) break;
    }

    if(!ok) printf("No such line.");
    puts("");
  }
  return 0;
}
