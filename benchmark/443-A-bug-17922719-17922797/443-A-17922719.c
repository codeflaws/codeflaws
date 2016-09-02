#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
   char s[1001],a[130];
   int i,count=0;
    gets(s);
    for(i=97;i<123;i++)
    {
        a[i]=0;
    }
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            a[s[i]]++;
        }
    }
      for(i=97;i<123;i++)
    {
        if(a[i]>0)
        count++;
    }
    printf("%d",count);
return 0;
}