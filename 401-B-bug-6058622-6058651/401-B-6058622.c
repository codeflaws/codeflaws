#include<stdio.h>
//#include<conio.h>
int main(int argc, char *argv[])
{
 int x,i,j,k,key,min,temp,n,ans=0,dif,count=1,temp1,a[4005];
// printf("Enter the values of x and k:");
 scanf("%d %d",&x,&k);
 for(i=1;i<=k;i++)
 {
  scanf("%d",&temp1);
  if(temp1==1)
  {
   scanf("%d",&a[count]);
   count++;
   scanf("%d",&a[count]);
   count++;
  }
  else if(temp1==2)
  {
   scanf("%d",&a[count]);
   count++;
  }
 }
 for(j=2;j<count;j++)
 {
  key=a[j];
  i=j-1;
  while(a[i]>key && i>0)
  {
   temp=a[i];
   a[i]=key;
   a[i+1]=temp;
   i--;
  }
 }
 for(i=1;i<count-1;i++)
 {
  dif=a[i+1]-a[i]-1;
  if(dif%2==0)
  ans=ans+(dif/2);
  else
  ans=ans+(dif/2)+1;
 }
 if(a[1]!=1)
 {
  dif=a[1]-1;
  if(dif%2==0)
  ans=ans+(dif/2);
  else
  ans=ans+(dif/2)+1;
 }
 if(a[count-1]!=x-1)
 {
  dif=x-a[count-1]-1;
  ans=ans+(dif%2==0?dif/2:dif/2+1);
 }
 if(k!=0)
 printf("%d ",ans);
 else
 {
 ans=x%2==0?x/2:(x/2)+1;
 printf("%d ",ans);
 }
 min=x-count;
 printf("%d",min);
// getch();
// clrscr();
return 0;
}