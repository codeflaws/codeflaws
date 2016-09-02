#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
   char m[3][11]={
       "qwertyuiop",
       "asdfghjkl;",
       "zxcvbnm,./"
   };
   
   char c,s[101];
   int i,j,l,t=0;
   
   scanf("%c",&c);
   scanf("%s",s);
   
   if(c=='R')
   for(l=0;l<strlen(s);l++)
       {
           t=0;
           for(i=0;i<3 && t!=1;i++)
           for(j=0;j<10;j++)
           if(s[l]==m[i][j])
           {
               printf("%c",m[i][j-1]);
               t=1;
               break;
           }
       }
    
    else
    for(l=0;l<strlen(s);l++)
       {
           for(i=0;i<3&&t!=1;i++)
           for(j=0;j<10;j++)
           if(s[l]==m[i][j])
           {
               printf("%c",m[i][j+1]);
               t=1;
               break;
           }
       }
    return 0;     
}
