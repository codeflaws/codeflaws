#include <stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
long long int x,y,a,b,c,d,i,t,s=0;
char r[10001];
scanf("%I64d %I64d %I64d %I64d %I64d",&t,&a,&b,&c,&d);
scanf("%s",&r);
x=c-a;
y=d-b;
for(i=0;i<t;i++)
{
    if(y==0&&x==0)
        break;
  else  if(r[i]=='E'&&x>0)
    {
        x=x-1;
    }
    else if (r[i]=='S'&&y<0)
    {
        y=y+1;
    }
    else if(r[i]=='W'&&x<0)
    {
        x=x+1;
    }
    else if(r[i]=='N'&&y>0)
    {
        y=y-1;
    }
    s=s+1;
}
if(s==t&&(y!=0||x!=0))
printf("-1");
else
    printf("%I64d",s);
    return 0;

}
