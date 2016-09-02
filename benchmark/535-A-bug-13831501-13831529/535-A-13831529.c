#include<stdio.h>
#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
char *a[28]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
int b,c[28]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,30,40,50,60,70,80,90},i,x,y;
scanf("%d",&b);
if((b>=0&&b<=20)||((b==30)||(b==40)||(b==50)||(b==60)||(b==70)||(b==80)||(b==90)))
{
for(i=0;i<28;i++)
{
if(b==c[i])
printf("%s",a[i]);
}
}
else if(b>=21&&b<=29)
{
x=b%10;
y=20;
printf("%s-%s",a[y],a[x]);
}
else if(b>=31&&b<=39)
{
x=b%10;
y=21;
printf("%s-%s",a[y],a[x]);
}
else if(b>=41&&b<=49)
{
x=b%10;
y=22;
printf("%s-%s",a[y],a[x]);
}
else if(b>=51&&b<=59)
{
x=b%10;
y=23;
printf("%s-%s",a[y],a[x]);
}
else if(b>=61&&b<=69)
{
x=b%10;
y=24;
printf("%s-%s",a[y],a[x]);
}
else if(b>=71&&b<=79)
{
x=b%10;
y=25;
printf("%s-%s",a[y],a[x]);
}
else if(b>=81&&b<=89)
{
x=b%10;
y=26;
printf("%s-%s",a[y],a[x]);
}
else if(b>=91&&b<=99)
{
x=b%10;
y=27;
printf("%s-%s",a[y],a[x]);
}
return 0;
}
