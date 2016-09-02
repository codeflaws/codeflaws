#include<stdio.h>

long long int abso(long long int a)
{
if(a<0)
 return -1*a;
return a;
}

int main(int argc, char *argv[])
{
long long int n,m,xc,yc,dx[10000],dy[10000],ans=0,temp1,temp2,count,x1,x2,min;
int i,j,k;
scanf("%lld %lld",&n,&m);
scanf("%lld %lld",&xc,&yc);
scanf("%d",&k);
for(i=0;i<k;i++)
  scanf("%lld %lld",&dx[i],&dy[i]);
for(i=0;i<k;i++)
{
 temp1=xc;
 temp2=yc;
 count=0;
if(dx[i]>0)
  x1=(n-temp1)/abso(dx[i]);
else if(dx[i]<0)
  {
   if(temp1%abso(dx[i])==0)
     x1=(temp1-1)/abso(dx[i]);
   else
    x1=temp1/abso(dx[i]);
  }
if(dy[i]>0)
  x2=(m-temp2)/abso(dx[i]);
else if(dy[i]<0)
  {
   if(temp2%abso(dy[i])==0)
     x2=(temp2-1)/abso(dy[i]);
   else
    x2=temp2/abso(dy[i]);
  }
if((dx[i]!=0)&&(dy[i]!=0))
 {
  if(x1>x2)
   min=x2;
  else
   min=x1;
 }
 else if(dx[i]==0)
  min=x2;
 else if(dy[i]==0)
  min=x1;
//printf("min=%lld\n",min);
 /*
 while(((temp1+dx[i])<=n)&&((temp2+dy[i])<=m)&&((temp1+dx[i])>0)&&((temp2+dy[i])>0))
  {
   temp1+=dx[i];
   temp2+=dy[i];
   count++;
  }
  */
xc=temp1+min*dx[i];
yc=temp2+min*dy[i];
//printf("%lld %lld\n",xc,yc);
ans+=min;
}
printf("%lld\n",ans);
return 0;
}
