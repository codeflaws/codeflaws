#include<stdio.h>
int main(int argc, char *argv[])
{
int temp1=0,temp2=0,temp3=0,n,p1,p2,p3,t1,t2,a,b,c,d,e,f=0,g=0,sum=0;
scanf("%d%d%d%d%d%d",&n,&p1,&p2,&p3,&t1,&t2);
if(n==1)
{scanf("%d%d",&a,&b);
printf("%d",(b-a)*p1);
return 0;
}
scanf("%d%d",&a,&b);
temp1=(b-a);
n--;
while(n--)
{


scanf("%d%d",&c,&d);
//printf("%d %d    ",c,d);

temp1=temp1+d-c;
e=c-b;

if(e<=t1)
temp1=temp1+e;

else if(e<=(t1+t2))
{
temp1=temp1+t1;
temp2=temp2+(e-t1);
}
else 
{

temp1=temp1+t1;
temp2=temp2+t2;
temp3=temp3+(e-t1-t2);
printf("%d,%d,%d,,,",temp1,temp2,temp3);
}

a=c;
b=d;
}

printf("%d\n",temp1*p1+temp2*p2+temp3*p3);

return 0;

}