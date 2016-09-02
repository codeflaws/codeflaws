#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char s[50];
    int e,i,m,n;
    scanf("%s",&s);
    m=0;
    n=0;
    e=0;
   for  (i=0;i<strlen(s);i++)
    {if (s[i]=='4')
       {m++;
       }
       if (s[i]=='7')
       {n++;
       }


    }
    if ((m==0)||(n==0))
     {printf("%d",-1);}
     else
     if (n>m)
     {printf("%d",7);}
     else
     {printf("%d",4);}
    return 0;
}
