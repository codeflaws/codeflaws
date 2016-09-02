#include<stdio.h>
int main(int argc, char *argv[])
{
int m,n,c=4,a,i,j;
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{

scanf("%d",&a);
if(a == 1 && c == 4) 
{
if(i == m - 1 || j == n-1) c = 2;
} 
}}
printf("%d\n",c);
return 0;
}
