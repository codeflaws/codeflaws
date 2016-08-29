#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{char door[10];
int n;
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
scanf("%s",door);
if(strcmp(door,"front")==0)
{
scanf("%d",&n);
if(n==1)
printf("L");
else
printf("R");
}
else
{
scanf("%d",&n);
if(n==2)
printf("L");
else
printf("R");
}
return 0;
}