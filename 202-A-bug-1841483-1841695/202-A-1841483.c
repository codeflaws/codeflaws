#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
int i,max=0;
char str[20];
int len;
scanf("%s",&str);
len=strlen(str);
for(i=1;i<len;i++)
 if(str[i]>str[max])
  max=i;
for(i=0;i<len;i++)
 if(str[i]==str[max])
  printf("%c",str[i]);

}
