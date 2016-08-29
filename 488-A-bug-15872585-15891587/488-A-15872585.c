#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
long long int a;
int b=0,i=0,k;
scanf("%d",&a);
for(i=1;i<100;i++)
{
a=a+1;
k=a;
while(k>0)
{
if(k%10==8||k%10==-8)
{
b=1;
break;
}
else
k=k/10;
}
if(b==1)
break;
}
printf("%d",i);
return 0;
}