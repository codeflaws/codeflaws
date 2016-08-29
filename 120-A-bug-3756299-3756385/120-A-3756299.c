#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
char str[10];
int a;
scanf("%s",str);
scanf("%d",&a);
if(strcmp(str,"front")==0)
{
if(a==1)
printf("L");
if(a==2)
printf("R");
}
if(strcmp(str,"back")==0)
{
if(a==2)
printf("L");
if(a==1)
printf("R");
}
return 0;
}