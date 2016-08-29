#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
 int i,n,l,flag=0;
 char a[101],b[101],c[101][100];
 gets(a);
 l=strlen(a);
 scanf("%d",&n);
 gets(c[0]);
 strcpy(b,a);
    for(i=0;i<n;i++)
     {
       scanf("%s",c[i]);

          if(strncmp(c[i],a,l)==0)
            {
            if(flag==0)
          {
            strcpy(b,c[i]);
            flag=1;
            }


       if(strcmp(b,c[i])>0)

           strcpy(b,c[i]);

     }

     }
  puts(b);
  return 0;
 }

