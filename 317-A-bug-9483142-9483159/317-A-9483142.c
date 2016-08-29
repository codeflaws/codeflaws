/*
luv_18
*/
#include<stdio.h>
int main(int argc, char *argv[])
{
long long int x,y,m,c=0,t;
scanf("%lld %lld %lld",&x,&y,&m);
if(m==0)
{
   if(x<0&&y<0)
   printf("-1");
   else
   printf("0");
}
else if(m>0)
{
    if(x<=0&&y<=0)
    printf("-1");
    else
    { 
    if(x>y)
    {
      t=x;
      x=y;
      y=t;
    }    
    if(x<0)
    {
      x=-x;     
      c=x/y;
      x=-x+(c*y);
    }          
    while(x<m && y<m)
    {
      if(x<=y)
      x=x+y;
      else
      y=x+y;
      c++;
    }
    printf("%lld",c);
    }
}
else if(m<0)
{
    if(x<m&&y<m)
    printf("-1");
    else 
    printf("0");
}                    
   // system("pause");
    return 0;
}
