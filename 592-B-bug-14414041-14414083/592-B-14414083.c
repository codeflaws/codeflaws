#include<stdio.h>
int main(int argc, char *argv[]) {
  int n;
  scanf("%d",&n);
  long long res=(long long)(n-2)*(long long)(n-2);
  printf("%lld\n",res);
  return 0;
}