#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<ctype.h>

#define MAX( a, b ) ( ( a > b) ? a : b ) 
#define MIN( a, b ) ( ( a < b) ? a : b )
#define FOR(ii,aa,bb) for(ii=aa;ii<bb;ii++)
#define and &&
#define or ||
int main(int argc, char *argv[]) {

int x=0,n=0,s=0,i,j,a[10];
char b;
scanf("%d",&x);
scanf("%c",&b);
scanf("%d",&s);
n+=((x%10)*10)+x/10;
if(x>5 and x<10){
    printf("10:01");
    return 0;
}
if(s<n){
    if(x<10)
    printf("0%d:",x);
    else
    printf("%d:",x);
    if(n<10)
    printf("0%d",n);
    else
    printf("%d",n);
  return 0;}
if(x<23 and n+10<60){
    if(x<10)
    printf("0%d:%d",x+1,n+10);
    else
    printf("%d:%d",x+1,n+10);
  return 0;}
if(n+10>=60){
  printf("20:02");
  return 0;}
printf("00:00");








  return 0;
}