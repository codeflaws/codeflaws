#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

int main(int argc, char *argv[]){
  int i,j,k,l,m,n;
  int x1, x2, a, b, fg, fgg;
  int mod;
  int stone;

  while(scanf("%d%d%d%d",&x1,&x2,&a,&b)==4){
    stone = x2 - x1;
    fg = 0;
    if(stone < 0) stone *= -1, k = a, a = b, b = k, a *= -1, b *= -1, fg = 1;
    if(b <= 0){ puts("DRAW"); continue; }

    fgg = 0;
    if(a <= 0) fgg = 1, a = 1;
    mod = stone % (a+b);
    if(mod == 0){
      if(fgg) puts("DRAW"); else puts("SECOND");
      continue;
    }
    if(mod < a || mod > b){
      puts("DRAW");
      continue;
    }

    if(stone > b && fgg){
      puts("DRAW");
      continue;
    }

    stone -= mod;
    puts("FIRST");
    if(fg==0) printf("%d\n",x2-stone);
    else      printf("%d\n",x2+stone);
  }

  return 0;
}
