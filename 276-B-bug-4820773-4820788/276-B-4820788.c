#include<stdio.h>
#include<string.h>
int a[30];
char s[1020];
int main(int argc, char *argv[])
{
 int i,j,l,ec,oc;
 scanf("%s",s);
 l=strlen(s);
for(i=0;i<l;i++)
{
    a[s[i]-'a']++;
}
ec=0,oc=0;
for(i=0;i<26;i++)
{
if(a[i]!=0)
if(a[i]%2==0)
ec++;
else
oc++;
}
if(oc<2)
{
printf("First");
}
else
{
if(l%2==1)
printf("First");
else
printf("Second");
}
return 0;
}
