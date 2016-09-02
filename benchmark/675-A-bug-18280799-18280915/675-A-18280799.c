#include<stdio.h>
int main(int argc, char *argv[])
{
  double p;
 long int a,b,c;
 scanf("%ld %ld %ld",&a,&b,&c);
 if(c==0) { if(a==b) printf("YES"); else printf("NO"); }
 else {
 p=(b-a)/(double)c;
 if(p<0) printf("NO"); else { if((p-(int)p)==0) printf("YES"); }}
 return 0;
 }
