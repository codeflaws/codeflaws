#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

void unionInit(int d[],int s){int i;rep(i,s)d[i]=i;}
int unionGet(int d[],int n){int t=n,k;while(d[t]!=t)t=d[t];while(d[n]!=n)k=d[n],d[n]=t,n=k;return n;}
int unionConnect(int d[],int a,int b){a=unionGet(d,a);b=unionGet(d,b);if(a==b)return 0;d[a]=b;return 1;}

int main(int argc, char *argv[]){
  int i,j,k,l,m,n;
  int a[1200], b[1200], unused[1200];
  int ind[1200];
  int cnt[1200];
  int res_a[1200], res_b[1200], res_c[1200], res_d[1200];
  int shima;
  int res, bef;

  scanf("%d",&n);
  m=n-1;
  rep(i,m) scanf("%d%d",a+i,b+i), a[i]--, b[i]--;

  unionInit(ind,n);
  rep(i,m) unionConnect(ind,a[i],b[i]);

  shima = 0;
  rep(i,n) cnt[unionGet(ind,i)]=1;
  rep(i,n) shima += cnt[i];

  res=0; bef=-1;
  rep(i,n) if(cnt[i]){
    if(bef>=0){
      res_c[res] = bef; res_d[res++] = i;
    }
    bef = i;
  }

  res=0;
  rep(k,m) unused[k]=0;
  
  rep(k,m){
    unionInit(ind,n);
    rep(i,m) if(unused[i]==0) if(i!=k) unionConnect(ind,a[i],b[i]);
    rep(i,n) cnt[i]=0;
    rep(i,n) cnt[unionGet(ind,i)]=1;
    j=0; rep(i,n) j+=cnt[i];
    if(j==shima){
      unused[k]=1;
      res_a[res]=a[k]; res_b[res++]=b[k];
    }
  }

  printf("%d\n",res);
  rep(i,res) printf("%d %d %d %d\n",res_a[i]+1,res_b[i]+1,res_c[i]+1,res_d[i]+1);

  return 0;
}
