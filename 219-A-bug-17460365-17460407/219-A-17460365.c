#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
int k;
scanf("%d",&k);
char ch[1001];
int len,i,hash[26]={0},hash1[26]={0},m,l,j,flag=0,tot=0,hi=0;
   scanf("%s",ch);
     
     len=strlen(ch);

  for(i=0;i<len;i++)
   hash[ch[i]-'a']++;
         for(i=0;i<26;i++)
          if(hash[i]>0)
            {
            if(hash[i]%k!=0)
              {flag=1;
              break;}
            }
            if(flag==0)
            {
            while(tot!=len)
             {
             for(i=0;i<26;i++)
              if(hash[i]>0)
              {
              l=hash[i]/k;
              for(j=0;j<l;j++)
              {
              tot++;
              printf("%c",i+'a');
              }
              }
             
             }}
             else
             printf("-1");
         
   
   printf("%d %d %d",hash[0],hash[1],hash[2]);
   
   
   return 0;
}
