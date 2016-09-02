// CODEFORCES 291A SPYKE TALKS.
#include<stdio.h>
int main(int argc, char *argv[])
{
int n,i,a[1100],temp,count=0,j,b[1100]={0};
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
if(a[i]<a[j])
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
}
}
}
for(i=1;i<n;i++)
{
   if(a[i]==a[i-1]&&b[i]!=2&&b[i-1]!=2)
   {
       count++;
       b[i]=2;
       b[i-1]=2;

   }
   else if(a[i]==a[i-1]&&(b[i-1]==2||b[i]==2))
   {
       count=-1;
       break;
   }
}
printf("%d",count);
return 0;
}
