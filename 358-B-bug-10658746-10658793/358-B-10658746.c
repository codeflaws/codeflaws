#include <stdio.h>
#include <string.h>

char str[800005]="<3",s1[800005]="",str2[800005]="";
int main(int argc, char *argv[])
{
int n,i=0,j=0,size=strlen(str);
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%s",s1);
for(j=0;j<strlen(s1);j++)
str[size++]=s1[j];
str[size++]='<';
str[size++]='3';
}
scanf("%s",str2);

for(i=0;i<strlen(str2) && j<strlen(str);i++)
if(str2[i]==str[j])
j++;

if(j==strlen(str))
printf("yes");
else
printf("no");
return 0;
}