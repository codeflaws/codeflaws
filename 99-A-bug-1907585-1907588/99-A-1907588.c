#include<stdio.h>
//#include<conio.h>
#include<string.h>

int main(int argc, char *argv[])
{
char str[1001];
scanf("%s",&str);

int len=strlen(str);
int i=0,j;
while(str[i]!='.')
{
i++;
}
int k=i;
if(str[k-1]=='9')
printf("GOTO Vasilisa.");
else if(str[k+1]-48<5)
{
for(j=0;j<i;j++)
printf("%c",str[j]);
}
else if (str[k+1]-48>=5)
{
for(j=0;j<i-1;j++)
printf("%c",str[j]);
str[j]=str[j]+1;
//printf("%d",l);
//int n = l+1;
//char nu = n;
printf("%c",str[j]);
}
//getch();
return 0;
}
