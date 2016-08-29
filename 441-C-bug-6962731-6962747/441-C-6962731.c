# include <stdio.h>

int main(int argc, char *argv[])
{
int a,b,c,s,e,flag=0,x=1,y=1,count=0,fi=1,r=0,ew=0;
scanf("%d%d%d",&a,&b,&c);
s=a*b;
e=s/c;
printf("%d ",e+s%c);
while((r++)!=s)
{
count++;
printf("%d %d ",x,y);
if(flag==0 && y!=b)y++;
else if(flag==1 && y!=1)y--;
else if(y==b){x++; flag=1; }
else if(y==1){x++; flag=0; }
if(count%e==0 && fi==0 && ew==c-1)
printf("\n");
else if(count%e==0 && fi==0)
{ew++; printf("\n%d ",e); }
else if(count== e+s%c && fi==1)
{ printf("\n%d ",e); fi=0; count=0; ew++;}
}
return 0;
}
