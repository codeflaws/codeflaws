#include<stdio.h>
//#include<conio.h>
int main(int argc, char *argv[])
{
 int n,n1,m,a[1005],key,found1=0,i,ans=0,max=0,found=0,j,temp,b[1005],min=0;
// printf("Enter the values of n and m:");
 scanf("%d %d",&n,&m);
 n1=n;
 for(i=1;i<=1005;i++)
 {
  a[i]=0;
 }
 for(i=1;i<=m;i++)
 {
  scanf("%d",&b[i]);
  if(b[i]>max)
  max=b[i];
  for(j=1;j<=b[i];j++)
  a[j]=a[j]+1;
 }
// for(i=1;i<=max;i++)
// printf("%d\n",a[i]);
 for(i=max;i>=1 && found==0;i--)
 {
  if(a[i]<=n && found==0)
  {
   ans=ans+i*a[i];
//   printf("%d %d\n",a[i],i);
   n=n-a[i];
  }
  else if(a[i]>n && found==0)
  {
   ans=ans+i*n;
   n=0;
  }
  if(n==0)
  found=1;
 }
 for(j=2;j<=m;j++)
 {
  key=b[j];
  i=j-1;
  if(b[i]> key)
  {
   while(b[i]>key)
   {
    temp=b[i];
    b[i]=key;
    b[i+1]=temp;
    i--;
   }
  }
 }
 for(i=1;i<=m && found1==0;i++)
 {
  if(b[i]<=n1)
  {
   min=min+(b[i]*(b[i]+1))/2;
   n1=n1-b[i];
  }
  else if(b[i]>n1)
  {
   temp=((b[i]*(b[i]+1))/2)-(((b[i]+n1)*(b[i]-n1+1))/2);
   min=min+temp;
   n1=0;
  }
  if(n1==0)
  found1=1;
 }
 printf("%d %d",ans,min);
// getch();
// clrscr();
return 0;
}