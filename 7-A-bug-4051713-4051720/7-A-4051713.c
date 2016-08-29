#include<stdio.h>
int main(int argc, char *argv[])
{
int i,c=0,c1=0,j;
char s[8][9];
for(i=0;i<8;i++)
{scanf("%s",s[i]);
if(strcmp(s[i],"BBBBBBBB")==0)
c++;
}
if(c==8)
printf("8");
else
{for(i=0;i<8;i++)
{for(j=0;j<8;j++)
{if(s[0][i]==s[j][i])
c1++;}
if(c1==8)
c++;
c1=0;}
printf("%d",c);}
return(0);}
