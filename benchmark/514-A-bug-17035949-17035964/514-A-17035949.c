/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
#define rep(i,a,n) for (int i=a;i<n;i++)
char a[20];
int main(int argc, char *argv[]) {
  int i, x=0;
  scanf("%s",&a);
  rep(i,0,strlen(a)) {
    x = (int)a[i]-48;
    if(i==0) {
      if(x < 9) {
        x = 9 - x;
      }
    }
    else if(x*2 > 9) {
      x = 9 - x;
    }
    printf("%d",x);
  }
	return 0;
}
