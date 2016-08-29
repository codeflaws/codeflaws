#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
char a[101][101], b[101];
int c,d,e,f,x,y,z;
scanf("%d\n",&c);
d=0;
for(x=1;x<=c;x=x+1)
{
gets(b);
e=0;
if(d>0)
{
for(y=1;y<=d;y=y+1)
{
if(strcmp(a[y],b)==0)
{
e=e-10000;
}
}
}
if(e==0)
{
d=d+1;
strcpy(a[d],b);
}
}
printf("%d",d);
return 0;
}
