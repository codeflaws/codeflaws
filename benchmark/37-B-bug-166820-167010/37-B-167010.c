#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

int main(int argc, char *argv[]){
  int i,j,k,l,m,n,tm;
  int used[1200], dmg[1200], pw[1200], hp;
  int res[1200], use_tm[1200], res_size;
  int maxHP, reg, mx;

  scanf("%d%d%d",&n,&maxHP,&reg);
  rep(i,n) scanf("%d%d",pw+i,dmg+i);

  hp = maxHP;
  rep(i,n) used[i]=0;
  res_size=0;

  for(tm=0;;tm++){
    int fg=0, bef_hp = hp;

    rep(i,n) if(used[i]) hp -= dmg[i];
    hp += reg;
    if(hp > maxHP) hp = maxHP;

    if(hp<=0) break;

    mx = 0;
    rep(i,n) if(!used[i]) if(pw[i]*maxHP >= hp*100) if(mx < dmg[i]){
      mx = dmg[i]; k = i;
    }
    if(mx){
      fg++;
      used[k] = 1;
      res[res_size]=k+1; use_tm[res_size] = tm;
      res_size++;
    }

    if(bef_hp > hp) fg++;
    
    if(!fg) break;
  }

  if(hp > 0)puts("NO");
  else{
    puts("YES");
    printf("%d %d\n",tm,res_size);
    rep(i,res_size) printf("%d %d\n",use_tm[i],res[i]);
  }

  return 0;
}
