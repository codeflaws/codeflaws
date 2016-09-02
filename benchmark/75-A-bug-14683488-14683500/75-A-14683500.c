#include<stdio.h>
int remove_zero(int n) {
  int prod=0;
  int times=1;
  while(n>0) {
    if(n%10!=0) {
      prod=n%10*times+prod;
      times*=10;
    }
    n=n/10;
  }
  return prod;
}
int main(int argc, char *argv[]) {
  int a,b;
  scanf("%d%d",&a,&b);
  int za=remove_zero(a);
  int zb=remove_zero(b);
  int zab=remove_zero(a+b);
  if(za+zb==zab) printf("YES\n");
  else printf("NO\n");

  return 0;
}