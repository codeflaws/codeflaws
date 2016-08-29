#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
  int i,n,sh,uh,m1,m2,m3,m4,m5;
  long int p,max=0;
  max=0;
  char s[21]={'\0'},winner[21]={'\0'};
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   scanf("%s %d%d%d%d%d%d%d",&s,&sh,&uh,&m1,&m2,&m3,&m4,&m5);
   p=((sh*100)-(uh*50)+m1+m2+m3+m4+m5);
   if(p>max)
   {
     max=p;
     strcpy(winner,s);
   }
  }
  puts(winner);
return 0;
}