#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MIN -2000000000
#define MAX 2000000000


int a[100000],k;

int set(int mi, int ma, int st, int c) {
  int b,i;
  long long s1, s2;
  printf("%d %d %d %d\n", mi, ma, st,c);
  if(mi+c>=ma) return 0;
  if(c==0) return 1;
  b=-(c/2);
  if(b<=mi || b+c-1>=ma) { //Krock
    b=mi+1;
    s1=0;
    for(i=0;i<c;i++) s1+=(long long)abs(b+i);
    s2=0;
    for(i=0;i<c;i++) s2+=(long long)abs(ma-1-i);
    if(s2<s1) b=ma-c;
  }
  for(i=0;i<c;i++) a[st+i*k]=b+i;
  return 1;
}


int main(int argc, char *argv[]) {
  int n,i,j,u[100000],st,ok,mi,c;
  char buf[12];
  scanf("%d %d", &n, &k);
  for(i=0;i<n;i++) {
    scanf("%s",buf);
    u[i]=(buf[0]=='?');
    if(!u[i]) sscanf(buf,"%d",&a[i]);
  }
  ok=1;
  for(i=0;i<k;i++) {
    mi=MIN;
    c=0;
    for(j=i;j<n;j+=k) {
      if(u[j]) {
	if(c==0) st=j;
	c++;
      }
      else {
	ok&=set(mi,a[j],st,c);
	mi=a[j];
	c=0;
      }
    }
    ok&=set(mi,MAX,st,c);
  }
  if(ok) {
    for(i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
  }
  else  printf("Incorrect sequence\n");
  return 0;
}
