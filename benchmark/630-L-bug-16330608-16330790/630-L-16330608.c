#include<stdio.h>
int main(int argc, char *argv[])
{long long int i,x,y,s,r,d;
scanf("%lld",&i);
if(i>9999 && i<=99999)
{
s=0;
d=i/10000;
s=s+d*10000;
r=i%1000;
d=r/100;
s=s+d*1000;
r=i%10;
s=s+r*100;
r=i%100;
d=r/10;
s=s+d*10;
r=i%10000;
d=r/1000;
s=s+d;
y=1;
x=5;
while(x!=0)
{
	if(x%2==1)
	{y=(y*s)%100000;
	}
	s=(s*s)%100000;
	x=x/2;
}
printf("%lld",y);
}
return 0;
}
