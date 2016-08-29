#include<stdio.h>
//#include<conio.h>
int main(int argc, char *argv[])
{
 int n,m,mid,i,temp1,temp2,found=0,j,count=0,ans=0;
 int str[105][105];
// printf("enter the value of n and m:");
 scanf("%d %d",&n,&m);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=m;j++)
   scanf("%d",&str[i][j]);
 }
 ans=n;
 if(n%2==1)
  mid=n;
 else
 {
  do
  {
   mid=ans/2;
   temp1=mid;
   temp2=mid+1;
   for(i=1;i<=mid && found==0 && mid>0;i++)
   {
    count=0;
    for(j=0;j<m;j++)
    {
     if(str[temp1][j]==str[temp2][j])
     {
      count++;
//      printf("count=%d\n",count);
     }
    }
    if(count==m)
    {
     temp1--;
     temp2++;
    }
    else
     found=1;
   }
   if(found==0 && mid>0)
   {
//    printf("it comes here\n");
    ans=mid;
   }
   if(ans%2==1)
    break;
  }while(found<=0 && mid>=1);
 }
 printf("%d",ans);
// getch();
// clrscr();
return 0;
}