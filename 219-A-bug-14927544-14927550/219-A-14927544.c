#include <stdio.h>
int main(int argc, char *argv[])
{
int i,j,n,t,m=0,a[28]={0},x=0;
char c,b[1001]={'\0'};
scanf("%d ",&n);
while((c=getchar())!='\n'){
    t = c-96;
    a[t]++;
    }
  for(i=1;i<27;i++){
       if(!a[i]) continue;
         if (a[i]%n){m=1;break;}
  else
       { t=a[i]/n;
      while(t--)
         b[x++]=i+96;}
         }
if(!m)  while(n--)
  printf("%s",b);
return 0;
}
