/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
// #define rep(i,a,n) for (int i=a;i<n;i++)
long long int a[500000];
int main(int argc, char *argv[]) {
  int i, day=0;
  char s[20];
  gets(s);
  if(s[5] == 'w') {
    if((int) s[0]-48 < 5 || (int) s[0]-48 == 7) {
      printf("52\n");
    } else {
      printf("52\n");
    }
  } else {
    if(strlen(s) == 10) {
      if((int) s[0]-48 <= 29) {
        printf("12\n");
      } else if((int) s[0]-48 == 30) {
        printf("11\n");
      } else {
        printf("7\n");
      }
    } else {
      day = (int)s[0]-48;
      day *= 10;
      day += (int)s[1]-48;
      if(day <= 29) {
        printf("12\n");
      } else if(day == 30) {
        printf("11\n");
      } else {
        printf("7\n");
      }
    }
  }
	return 0;
}
