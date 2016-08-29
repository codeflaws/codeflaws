#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
   char s1[1002];
   char s2[1002];
   gets(s1);
   gets(s2);
   int t1[26];
   int t2[26];

   int i,x;
   for(i=0;i<26;i++)
   {
       t1[i]=0;
       t2[i]=0;
   }
   for(i=0;i<strlen(s1);i++)
   {
       t1[s1[i]-97]++;

   }
   for(i=0;i<strlen(s2);i++)
   {
       t2[s2[i]-97]++;

   }

x=0;
    for(i=0;i<26;i++)
    {
        if((t1[i]==0)&&(t2[i]>0))
        {
            printf("%d",-1);
            break;
        }
        if(t1[i]>=t2[i])
            x=x+t2[i];

        if(t1[i]<t2[i])
            x=x+t1[i];


    }


   printf("%d",x);
    return 0;
}
