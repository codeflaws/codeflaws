#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
   int a,b,c,m=0;
   fscanf(stdin,"%d %d %d",&a,&b,&c);
   m=(a+b)*c;
   if(a*b*c>m) m=a*b*c;
   if(a*(b+c)>m) m=a*(b+c);
   if((a*b+c)>m) m=(a*b+c);
   if((a+b*c)>m) m=(a+b*c);
   printf("%d",m);
   exit (0);
return 0;
}