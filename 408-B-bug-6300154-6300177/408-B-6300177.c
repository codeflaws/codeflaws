#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int arr[1005];int brr[1005];
int main(int argc, char *argv[])
{
    int t,n,i,s=0,flg=0;
    char s1[1005],s2[1005],ent;
    scanf("%s",&s1);
    scanf("%c",&ent);
    scanf("%s",&s2);
   for(i=0;i<strlen(s1);i++)
   {
       arr[s1[i]-'a']++;
   }
   for(i=0;i<strlen(s2);i++)
   {
       brr[s2[i]-'a']++;
   }
   for(i=0;i<=26;i++)
   {
       if(( arr[i]==0 && brr[i]!=0 ))
      {
        printf("-1");
        return 0;
      }
   }
   for(i=0;i<=26;i++)
   {
       if(arr[i]>brr[i]&&arr[i]!=0&&brr[i]!=0)
       {
           s=s+brr[i];//flg=1;
       }
       else if(arr[i]<brr[i]&&arr[i]!=0&&brr[i]!=0)
       {
           s=s+arr[i];//flg=1;
       }
        else if(arr[i]==brr[i]&&arr[i]!=0&&brr[i]!=0)
       {
           s=s+arr[i];//flg=1;
       }
   }
 //  if(flg==1)
   printf("%d",s);
  // else
  // printf("-1");
    return 0;
}

