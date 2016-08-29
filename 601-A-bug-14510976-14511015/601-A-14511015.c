#include<stdio.h>
#define min(a,b) (a<b)?a:b;
int main(int argc, char *argv[])
{ int infi=401,t,n,m,max,a[402][402]={401},j,k,sum=0,ns,l1,l2,i,flag=0;
 scanf("%d%d",&n,&m);

 for(i=1;i<=m;i++)
 {scanf("%d%d",&l1,&l2); a[l1][l2]=1; a[l2][l1]=1; 
 if(a[1][n]==1) 
 flag=1;
 }
 if(flag==1)
 {
 for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
{a[i][j]=!a[i][j];  

}}
 
 
 }

for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
{if(a[i][j]==0)
a[i][j]=infi;
}} 
 
 
 
 
 
 for(k=1;k<=n;k++)
{
for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
{
 
 if(i!=j)
a[i][j] = min( a[i][j] , a[i][k]+a[k][j]); 
 
}}} 




if(a[1][n]>=401)
printf("-1");
else
printf("%d",a[1][n]);

return 0;
} 