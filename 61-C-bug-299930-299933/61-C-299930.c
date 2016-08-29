#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<assert.h>
char t[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int T[36];
typedef long long ll;
void init(){
  int i;for(i=0;i<36;i++)T[i]=i;
}
ll nto10(char s[],int n)
{
  int i,j;
  ll res=0,p=1;
  for(i=strlen(s)-1;i>=0;i--){
    for(j=0;j<n;j++){
      if(s[i]==t[j]){
        res+=T[j]*p;
        break;
      }
    }
    p*=n;
  }
  return res;
}
void swap(char*a,char*b){char t=*a;*a=*b;*b=t;}
void reverse(char*s)
{
  int i=0,j=strlen(s)-1;
  for(;i<j;i++,j--)swap(s+i,s+j);
}
void _10ton(ll a,ll n,char s[])
{
  ll i,j,c=0;
  while(a){
    s[c++]=t[a%n];
    a/=n;
  }
  s[c]='\0';
  reverse(s);
}
typedef struct radix {
  ll  digit;
  char roman;
  char romanNext;
} RADIX; 
char* roman(ll num, char buff[]){
  static RADIX table[4]={
    {1000,'M','*'},
    {100,'C','D'},
    {10,'X','L'},
    {1,'I','V'}
  };
  ll tableSize = sizeof(table)/sizeof(RADIX);
  ll i, j, n;
  char *p=buff;
  for(i=0;i<4;i++){
    n = num / table[i].digit;
    //printf("%lld %lld\n",n,num);
    if( 1 <= n && n <=3 ){
      for(j=0;j<n;j++)
        *p++=table[i].roman;
    } else if(n == 4){
      *p++=table[i].roman;
      *p++=table[i].romanNext;
    } else if(n == 5){
      *p++=table[i].romanNext;
    } else if(6<= n && n <=8){
      *p++=table[i].romanNext;
      for(j=0;j<n-5;j++)
        *p++=table[i].roman;
    } else if(n == 9){
      *p++=table[i].roman;
      *p++=table[i-1].roman;
    }
    //num -= n * table[i].digit;
    //if(i==3){exit(0);}
    num%=table[i].digit;
  }
  *p='\0';
  return buff;
}
int main(int argc, char *argv[])
{
  char a[1100],b[1100],c[1100],d[1100]={0};
  ll n,i,len,temp;
  init();
  scanf("%s%s%s",a,b,c);
  n=nto10(c,atoll(a));
  if(b[0]!='R'){
    _10ton(n,atoll(b),d);
    puts(d);
  }
  else{
    puts(roman(n,d));
    //puts(d);
  }
  return 0;
}
