#include <stdio.h>
int main(int argc, char *argv[]){
  long long a,b;
  scanf("%lld %lld",&a,&b);
  long long c=0;
  while(b){
    c*=10;
    c+=(b%10);
    b/=10;
  }
  printf("%lld\n",a+c);

}