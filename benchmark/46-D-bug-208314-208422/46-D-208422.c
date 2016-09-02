#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

int main(int argc, char *argv[]){
  int i,j,k,l,m,n;
  int now[200001], L, ind, len, s, ok;
  int p[1000];
  int mae, ushiro;

  while(scanf("%d%d%d%d",&L,&mae,&ushiro,&n)==4){
    L += mae + ushiro;
    rep(i,L) now[i]=0; ind = 0;
    rep(i,n) p[i]=-1;
    while(n--){
      scanf("%d%d",&m,&len); ind++;
      if(m==1){
        s = len + mae + ushiro;
        ok = 0;
        rep(i,L-s+1){
          rep(j,s) if(now[i+j]) break;
          if(j==s){ ok=1; break; }
        }
        if(!ok){puts("-1"); continue;}
        printf("%d\n",i);
        rep(k,len) now[i+k+mae]=ind; p[ind]=i+mae;

/*        rep(k,L) printf("%d",now[k]); puts("");*/
      } else {
        if(p[len]<0) continue;
        k=p[len]; p[len]=-1;
        while(now[k]==len) now[k]=0, k++;
      }
    }
    break;
  }

  return 0;
}
