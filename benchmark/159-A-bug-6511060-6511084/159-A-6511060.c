#include<stdio.h>
//#include<conio.h>
int main(int argc, char *argv[])
{
 struct social
 {
  char str1[25];
  char str2[25];
  int t;
 };
 struct social frnd[1005];
 int found=0,found1=0,i,j,n,d,tme,a[505],ans=0,k=1;
 char temp1[25],temp2[25];
// printf("enter the value of n and d:");
 scanf("%d %d",&n,&d);
 for(i=1;i<=n;i++)
 {
  scanf("%s",&frnd[i].str1);
  scanf("%s",&frnd[i].str2);
  scanf("%d",&frnd[i].t);
 }
 for(i=1;i<=n;i++)
 {
  strcpy(temp1,frnd[i].str1);
  strcpy(temp2,frnd[i].str2);
  tme=frnd[i].t;
  found=0;
  if(tme>=0)
  {
   for(j=i+1;j<=n && found==0;j++)
   {
    if(frnd[j].t-tme<=d && frnd[j].t>0)
    {
     if(strcmp(frnd[j].str1,temp2)==0 && strcmp(frnd[j].str2,temp1)==0 && frnd[j].t>=0)
     {
      a[k]=i;
      found=1;
      ans++;
      k++;
      frnd[j].t=-100;
     }
     if(found==1)
     {
      found1=1;
      for(j=i+1;j<=n;j++)
      {
       if(strcmp(frnd[j].str1,temp2)==0 && strcmp(frnd[j].str2,temp1)==0)
	frnd[j].t=-100;
       if(strcmp(frnd[j].str1,temp1)==0 && strcmp(frnd[j].str2,temp2)==0)
	frnd[j].t=-100;
      }
     }
    }
    else if(frnd[j].t-tme>d)
     found=1;
   }
  }
 }
 if(found1==0)
  printf("0");
 else
 {
  printf("%d\n",ans);
  for(i=1;i<=ans;i++)
  {
   printf("%s %s\n",frnd[a[i]].str1,frnd[a[i]].str2);
  }
 }
//  getch();
// clrscr();
return 0;
}