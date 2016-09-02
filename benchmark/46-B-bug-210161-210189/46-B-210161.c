#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
int x,y,a,b,c,d,e,f,p,q,r,t,z;
int m[6];
char s[3];
for(x=1;x<=5;x=x+1)
{
scanf("%d",&m[x]);
}
scanf("%d",&a);
for(x=1;x<=5;x=x+1)
{
scanf("%s",&s);
if(strlen(s)==3)
{
b=5;
}
else if(strlen(s)==2)
{
b=4;
}
else
{
if(s[0]=='L')
{
b=3;
}
else if(s[0]=='M')
{
b=2;
}
else 
{
b=1;
}
}
for(z=0;z<=4;z=z+1)
{
d=b-z;
e=b+z;
if(e<=5 && m[e]>=1)
{
r=e;
m[e]=m[e]-1;
break;
}
if(d>=1 && m[d]>=1)
{
r=d;
m[d]=m[d]-1;
break;
}
}
if(r==1)
{
printf("S\n");
}
else if(r==2)
{
printf("M\n");
}
else if(r==3)
{
printf("L\n");
}
else if(r==4)
{
printf("XL\n");
}
else if(r==5)
{
printf("XXL\n");
}
}
return 0;
}
