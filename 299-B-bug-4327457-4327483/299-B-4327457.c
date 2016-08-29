#include<stdio.h>
int main(int argc, char *argv[])
{
int a,b,i=0,j=0;
char c=1;
scanf("%d%d",&a,&b);
while(c!='\n'&&c!='\0')
{
scanf("%c",&c);
if(c=='#')
i++;
else
i=0;
if(i==b)
{
j=1;
break;
}
}
if(j==1)
printf("NO");
else
printf("YES");

return 0;
}