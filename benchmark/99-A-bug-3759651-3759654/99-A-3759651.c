#include<stdio.h>
int main(int argc, char *argv[])
{char a[10000];
scanf("%s",a);
int j,i,k;
while(a[i]!='.')
i++;

if(a[i-1]<'9')
{
if(a[i+1]>'5')
a[i-1]++;
for(k=0;k<i;k++)
printf("%c",a[k]);}
else printf("GOTO Vasilisa.");

return 0;
}