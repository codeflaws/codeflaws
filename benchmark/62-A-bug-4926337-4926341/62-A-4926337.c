#include<stdio.h>
int main(int argc, char *argv[])
{
int al,ar,bl,br;
scanf("%d%d%d%d",&al,&ar,&bl,&br);
int b1=0,b2=0;
if(ar==1 && bl<=4)
{
printf("YES\n");
return 0;
}
if(al==1 && br<=4)
{
printf("NO\n");
return 0;
}
/*if(ar==1 && bl>4)
{
printf("NO\n");
return 0;
}
if(al==1 && br>4)
{
printf("NO\n");
return 0;
}*/
if(bl>=ar-1 && bl<=2*(ar+1))
b1=1;
if(br>=al-1 && br<=2*(al+1))
b2=1;
if(b1==1||b2==1)
printf("YES\n");
else
printf("NO\n");
return 0;
}
