#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
int n,t=0,z,i,j=0,f=0,o=0,k=0,p=0;
char x[1002],m;
scanf("%d",&n);
scanf("%s",&x);
z=strlen(x);

    for(i=0;i<z;i++)
{
 if(x[i]=='.')
 {
  t=t+1;
 }
 else
 {
    m =x[i];
    break;
 }
}

    for(i=0;i<z;i++)
{
if(x[i]=='R')
{
 p=1;
 f=f+1;
}
else if(x[i]=='L')
{
    k=k+1;
    o=1;
}
}
 for(i=0;i<z;i++)
{
 if(x[i]==m)
 {
  j=j+1;
 }
}
if(p==1&&o==0)
   printf("%d %d",t+1,f+t+1);
else if(o==1&&p==0)
    printf("%d %d",t+1,k+t+1);
else
    printf("%d %d",t+1,t+j);

return 0;
}
