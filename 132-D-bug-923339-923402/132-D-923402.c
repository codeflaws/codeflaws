#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

char in[1100000];
int fg[1100000], res[1100000], res_size;

int main(int argc, char *argv[]){
  int i,j,k,l,m,n;

  scanf("%s",in);
  n = strlen(in);

  res_size = 0;
  rep(i,n) if(in[i]=='1'){
    if(i+1==n || in[i+1]=='0'){
      res[res_size] = n-i-1;
      fg[res_size] = 1;
      res_size++;
      continue;
    }

    res[res_size] = n-i;
    fg[res_size] = 1;
    res_size++;
    
    for(j=i+1;j<=n;j++){
      if(j==n || (in[j]=='0' && (j+1==n || in[j+1]=='0'))){
        res[res_size] = n-j;
        fg[res_size] = -1;
        res_size++;
        i = j; break;
      }

      if(in[j]=='0'){
        res[res_size] = n-j-1;
        fg[res_size] = -1;
        res_size++;
      }
    }
  }

  printf("%d\n",res_size);
  rep(i,res_size){
    if(fg[i]==1) putchar('+'); else putchar('-');
    printf("2^%d\n",res[i]);
  }

  return 0;
}
