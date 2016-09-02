#include <stdio.h>
typedef long long ll;

ll lucky[2000];
int nl;

#define MIN(a,b) a<b?a:b
#define MAX(a,b) a>b?a:b

ll count2(ll minlow,ll maxlow,ll minhigh,ll maxhigh,ll pl,ll pr,ll vl,ll vr) {
  ll res=0;
  ll aa,ab,ba,bb,x,y;
  aa=MAX(pl,minlow);
  ab=MIN(pr,maxlow);
  ba=MAX(vl,minhigh);
  bb=MIN(vr,maxhigh);
  x=ab-aa+1;
  y=bb-ba+1;
  if(x>0 && y>0) res+=x*y;
  return res;
}

ll count3(ll minlow,ll maxlow,ll minhigh,ll maxhigh,ll pl,ll pr,ll vl,ll vr) {
  ll res=0;
  ll aa,ab,ba,bb,x,y;
  pl=MAX(pl,vl);
  pr=MIN(pr,vr);
  if(pl>pr) return 0;
  aa=MAX(minlow,pl);
  ab=MIN(maxlow,pr);
  ba=MAX(minhigh,pl);
  bb=MIN(maxhigh,pr);
  x=ab-aa+1;
  y=bb-ba+1;
  if(x>0 && y>0) res+=x+y;
  return res;
}

ll count(ll minlow,ll maxlow,ll minhigh,ll maxhigh,ll pl,ll pr,ll vl,ll vr) {
  ll res=0;
  res+=count2(minlow,maxlow,minhigh,maxhigh,pl,pr,vl,vr);
  res+=count2(minlow,maxlow,minhigh,maxhigh,vl,vr,pl,pr);
//  res-=count3(minlow,maxlow,minhigh,maxhigh,vl,vr,pl,pr);
  return res;
}

int main(int argc, char *argv[]) {
  int i,j,k,K,maks,min;
  ll tall,tot,yes;
  int pl,pr,vl,vr;

  nl=0;
  lucky[nl++]=0;
  for(i=1;i<10;i++) {
    for(j=0;j<(1<<i);j++) {
      tall=0;
      for(k=0;k<i;k++) {
        if(j&(1<<(i-k-1))) tall=tall*10+7;
        else tall=tall*10+4;
      }
      lucky[nl++]=tall;
    }
  }
  lucky[nl++]=1000000000000000LL;

again:
  if(scanf("%d %d %d %d %d",&pl,&pr,&vl,&vr,&K)!=5) return 0;
  tot=(pr-pl+1LL)*(vr-vl+1LL);
  yes=0;
  maks=pr>vr?pr:vr;
  min=pl<vl?pl:vl;

  for(i=0;;i++) {
    if(i+K+1>=nl) break;
    if(lucky[i+K]>maks) break;
/*    printf("try %I64d %I64d %I64d %I64d\n",lucky[i]+1,lucky[i+1],lucky[i+K],lucky[i+K+1]-1);*/
    yes+=count(lucky[i]+1,lucky[i+1],lucky[i+K],lucky[i+K+1]-1,pl,pr,vl,vr);
  }
  if(K==1) {
    for(i=1;i<nl-1;i++) {
      if(lucky[i]>=vl && lucky[i]>=pl && lucky[i]<=vr && lucky[i]<=pr) yes--;
    }
  }
  printf("%.12f\n",(double)((long double)yes/tot));
  goto again;
  return 0;
}
