#include<stdio.h>
long long int x1(long long int ,long long int );
int main(int argc, char *argv[])
{long long int a,b,k=0,q,q1;
scanf("%lld %lld",&a,&b);
if(b>1000)
{q=b/1000;
    if(a<1000)
    k=q*100+8-x1(1,a-1)+x1(q*1000,b);
   else
   {
       q1=a/1000;
       k=q*100+8-q1*100-8-x1(q1*1000,a-1)+x1(q*1000,b);  }


}
if(b<=1000)
{
    k=x1(a,b);
}



printf("%lld\n",k);
return 0;
}
long long int x1(long long int a1,long long int b1)
{long long int i,l,j,k1=0,t,y=0,m=1,p=0,u=-1,x;
    j=a1;
while(j/10!=0)
{j=j/10;y++;}

for(i=a1;i<=b1;i++)
{if(y>u)
    {m=1;
    for(l=1;l<=y+1;l++)
    m=m*10;}
    u=y;
if((i-(i%10))==0)
{k1++;}
else
{
t=i%10;

if(i<m)
{x=m/10;
    p=i/x;
if(t==p)
k1++;
}
else
y++;}}
return(k1);


}
