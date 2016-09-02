#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
int i,l,s2013[5000]={0},s2014[5000]={0},s2015[5000]={0},max1=0,max2=0,max3=0,ans1,ans2,ans3,y,z;
char s[100001];
gets(s);
l=strlen(s);
for(i=0;i<=l-10;i++)
{if(s[i]!='-'&&s[i+1]!='-'&&s[i+2]=='-'&&s[i+3]!='-'&&s[i+4]!='-'&&s[i+5]=='-'&&s[i+6]=='2'&&s[i+7]=='0'&&s[i+8]=='1'&&s[i+9]!='-')
{ y=(s[i+3]-48)*10+(s[i+4]-48);
 z=(s[i]-48)*10+(s[i+1]-48);
if(((y%2!=0&&y<=7)||(y%2==0&&y>=8&&y<=12))&&(z>0&&z<=31))
{if(s[i+9]=='3')
s2013[(s[i]-48)*1000+(s[i+1]-48)*100+(s[i+3]-48)*10+(s[i+4]-48)]++;
else if(s[i+9]=='4')
s2014[(s[i]-48)*1000+(s[i+1]-48)*100+(s[i+3]-48)*10+(s[i+4]-48)]++;
else if(s[i+9]=='5')
s2015[(s[i]-48)*1000+(s[i+1]-48)*100+(s[i+3]-48)*10+(s[i+4]-48)]++;}
else if(((y%2==0&&y>0&&y<=6)||(y==9||y==11))&&(z>0&&z<=30))
{if(s[i+9]=='3')
s2013[(s[i]-48)*1000+(s[i+1]-48)*100+(s[i+3]-48)*10+(s[i+4]-48)]++;
else if(s[i+9]=='4')
s2014[(s[i]-48)*1000+(s[i+1]-48)*100+(s[i+3]-48)*10+(s[i+4]-48)]++;
else if(s[i+9]=='5')
s2015[(s[i]-48)*1000+(s[i+1]-48)*100+(s[i+3]-48)*10+(s[i+4]-48)]++;}
}}
for(i=0;i<5000;i++)
{if(s2013[i]>=max1)
{max1=s2013[i];
ans1=i;}
if(s2014[i]>=max2)
{max2=s2014[i];
ans2=i;}
if(s2015[i]>=max3)
{max3=s2015[i];
ans3=i;}}
int max=(max1>max2&&max1>max3)?max1:((max2>max3)?max2:max3);
if(max==max1)
{if(ans1/100>=10)
printf("%d-",ans1/100);
else
printf("0%d-",ans1/100);
if(ans1%100>=10)
printf("%d-",ans1%100);
else
printf("0%d-",ans1%100);
printf("2013");
}
else if(max==max2)
{if(ans2/100>=10)
printf("%d-",ans2/100);
else
printf("0%d-",ans2/100);
if(ans2%100>=10)
printf("%d-",ans2%100);
else
printf("0%d-",ans2%100);
printf("2014");

}
else
{
    if(ans3/100>=10)
printf("%d-",ans3/100);
else
printf("0%d-",ans3/100);
if(ans3%100>=10)
printf("%d-",ans3%100);
else
printf("0%d-",ans3%100);
printf("2015");
}
return(0);}
