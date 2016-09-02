#include<stdio.h>
int main(int argc, char *argv[])
{
 char a[10][11];
 int i,j,n,m,c=0;
 scanf("%d%d",&n,&m);
 for(i=0;i<n;i++)
 {
  for(j=0;j<=m;j++)
   {
     scanf("%c",&a[i][j]);
   }
 }
 for(i=0;i<n;i++)
 {
   for(j=0;j<=m;j++)
   {
    if(a[i][j]=='W')
    {
     if(a[i-1][j]=='P')
     {
      a[i][j]='k';
      a[i-1][j]='k';
      c++;
     }
     else if(a[i+1][j]=='P')
     {
      a[i][j]='k';
      a[i+1][j]='k';
      c++;
     }
     else if(a[i][j-1]=='P')
     {
      a[i][j]='k';
      a[i][j-1]='k';
      c++;
     }
     else if(a[i][j+1]=='P')
     {
      a[i][j]='k';
      a[i][j+1]='k';
      c++;
     }
    }
   }}
 printf("%d",c);
 return(0);
 }
