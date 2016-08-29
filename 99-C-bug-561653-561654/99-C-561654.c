#include <stdio.h>

int main(int argc, char *argv[])
{
  int num[6];
  char ans[6];
  char t[7];
  int n,i,j,temp;
  
  scanf("%s",&t);
  n=0;
  for(i=0;i<6;i++)num[i]=0;
  for(i=0;i<6;i++)
     {
      for(j=0;j<n;j++)
         {
          if(ans[j]==t[i])break;
         }
      num[j]++;
      if(j==n)ans[n++]=t[i];
     }
  
  for(i=0;i<n;i++)
     {
      for(j=i+1;j<n;j++)
         {
          if(num[j]>num[i])
             {
              temp=num[j];
              num[j]=num[i];
              num[i]=temp;
             }
         }
     }
  if(n==6)
     {
      puts("30");
     }
  else if(n==1)
     {
      puts("1");
     }
  else if(n==5)
     {
      puts("15");
     }
  else if(n==4)
     {
      if(num[0]==3)puts("5");
      else puts("8");
     }
  else if(n==3)
     {
      if(num[0]==4)puts("2");
      else if(num[0]==2)puts("6");
      else puts("3");
     }
  else
     {
      if(num[0]==5)puts("1");
      else puts("2");
     }
  return 0;
}
