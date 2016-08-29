#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

int main(int argc, char *argv[]){
  int i,j,k,l,m,n,q,t=1,ok;
  int mem[120], tmp[120];
  char com[100]; int arg;

  scanf("%d%d",&q,&n);
  rep(i,n) mem[i]=0; mem[n]=10000;
  while(q--){
    scanf("%s",com);
    if(com[0]!='d') scanf("%d",&arg);
    if(com[0]=='a'){
      ok=0;
      rep(i,n+1-arg){
        k=0; rep(j,arg) if(mem[i+j]) k++;
        if(k==0){
          rep(j,arg) mem[i+j]=t;
          printf("%d\n",t++);
          ok=1;
          break;
        }
      }
      if(!ok) puts("NULL");
    }
    if(com[0]=='e'){
      k=0;
      rep(i,n) if(mem[i]==arg) mem[i]=0, k++;
      if(!k) puts("ILLEGAL_ERASE_ARGUMENT");
    }
    if(com[0]=='d'){
      rep(i,n) tmp[i]=0; k=0;
      rep(i,n) if(mem[i]) tmp[k++]=mem[i];
      rep(i,n) mem[i]=tmp[i];
    }
  }

  return 0;
}
