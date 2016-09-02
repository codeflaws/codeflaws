#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
int n,k,i,l;
char s[102];
for(i=0;i<102;i++)
s[i]='\0';
scanf("%d%d",&n,&k);
scanf("%s",s);
l=n-k;
if(l==0)
{
for(i=n-1;i>=1;i--)
{
printf("PRINT %c\n",s[i]);
printf("LEFT\n");
}
printf("PRINT %c\n",s[0]);
return 0;
}
else if(k==1)
{
for(i=0;i<n-1;i++)
{
printf("PRINT %c\n",s[i]);
printf("RIGHT\n");
}
printf("PRINT %c\n",s[n-1]);
return 0;
}
else if(k>=l)
{
for(i=k;i<n;i++)
printf("RIGHT\n");
printf("PRINT %c\n",s[n-1]);
for(i=n-2;i>=0;i--)
{
printf("LEFT\n");
printf("PRINT %c\n",s[i]);
}
return 0;
}
else
{
for(i=k-1;i>0;i--)
printf("LEFT\n");
printf("PRINT %c\n",s[0]);
for(i=1;i<n;i++)
{
printf("RIGHT\n");
printf("PRINT %c\n",s[i]);
}
return 0;
}
}
