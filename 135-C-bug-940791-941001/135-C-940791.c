#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

char in[110000];

int is_ok_00(int one, int zero, int hatena, int len){
  if(len%2 && one)    one--, len--;
  if(len%2 && hatena) hatena--, len--;
  if(len%2 && zero)   zero--, len--;

  if(one+2 <= zero+hatena) return 1;
  return 0;
}

int is_ok_11(int one, int zero, int hatena, int len){
  if(len%2 && one)    one--, len--;
  if(len%2 && hatena) hatena--, len--;
  if(len%2 && zero)   zero--, len--;

  if(zero+2 <= one+hatena) return 1;
}

int is_ok_01(int one, int zero, int hatena, int len){
  if(len%2 && one)    one--, len--;
  if(len%2 && hatena) hatena--, len--;
  if(len%2 && zero)   zero--, len--;

  if(zero+hatena < one) return 0;
  if(one+hatena < zero) return 0;
  return 1;
}

int main(int argc, char *argv[]){
  int i,j,k,l,m,n;
  int one, zero, hatena, len;
  int ok[2][2] = {};

  one = zero = hatena = 0;

  scanf("%s",in);
  len = strlen(in);

  rep(i,len){
    if(in[i]=='1') one++;
    if(in[i]=='0') zero++;
    if(in[i]=='?') hatena++;
  }

  if(is_ok_00(one,zero,hatena,len)) ok[0][0] = 1;
  if(is_ok_11(one,zero,hatena,len)) ok[1][1] = 1;
  if(is_ok_01(one,zero,hatena,len)){
    if(in[len-1]=='0') ok[1][0] = 1;
    if(in[len-1]=='1') ok[0][1] = 1;
    if(in[len-1]=='?'){
      if(is_ok_01(one+1, zero, hatena-1, len)) ok[0][1] = 1;
      if(is_ok_01(one, zero+1, hatena-1, len)) ok[1][0] = 1;
    }
  }

  if(ok[0][0]) puts("00");
  if(ok[0][1]) puts("01");
  if(ok[1][0]) puts("10");
  if(ok[1][1]) puts("11");

  return 0;
}
