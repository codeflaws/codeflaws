#include<stdio.h>
int main(int argc, char *argv[])
{
    char s[101],c;
    int x,y,z,m=0,n=0,p=0,q=0;
    scanf("%s",s);
    for(x=0;s[x]!='@';x++)
    {   q++;
        c=s[x];
        if((c>=65 &&c <=90) || (c>=97 &&c <=122) || (c>=48 &&c <=57) ||c==95)
        continue;
        goto v;
    }
    if(q==0 || q>16)
    goto v;
    for(y=x+1;s[y]!='\0';y++)
    {

        c=s[y];
     if(c=='.')
     {
         if(m>=1 && m<=16)
         {
             n=n+m;
             m=0;
         }
         else
         goto v;
         continue;
     }
     if((c>=65 &&c <=90) || (c>=97 &&c <=122) || (c>=48 &&c <=57) ||c==95)
     m++;
     else if(c=='/')
     break;
     else
     goto v;
    }
    if(s[y]=='\0')
    n=n+m;
    if(n==0 || n>32 || m==0 || m>16)
    goto v;
    if(s[y]=='\0')
    {
    printf("YES");
    exit(0);
    }
    for(z=y+1;s[z]!='\0';z++)
    {
        c=s[z];p++;
        if((c>=65 &&c <=90) || (c>=97 &&c <=122) || (c>=48 &&c <=57) ||c==95)
        continue;
        goto v;
    }
    if(s[z]=='\0'&& p>0 && p<17)
    {
    printf("YES");
    exit(0);
    }
     v:
     printf("NO");
     return(0);
     }
