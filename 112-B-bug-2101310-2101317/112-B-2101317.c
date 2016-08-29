#include<stdio.h>
int main(int argc, char *argv[])
{
 int n,x,y;
 scanf("%d%d%d",&n,&x,&y);
 n=n/2;
 if((x==n||x==n+1) && (y==n || y==n+1))
 printf("NO");
 else
 printf("YES");
 return(0);
 }
