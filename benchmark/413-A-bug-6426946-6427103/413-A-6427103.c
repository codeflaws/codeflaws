#include<stdio.h>
int main(int argc, char *argv[])
{
int n,m,min,max,t[110],temp,i,count=0,flag1=0,flag2=0,flag=0;
scanf("%d %d %d %d",&n,&m,&min,&max);
temp=n-m;
for(i=0;i<m;i++)
scanf("%d",&t[i]);
for(i=0;i<m;i++)
{
    if(t[i]>max||t[i]<min)
    {
        flag=1;
        break;

    }
   if(t[i]==min||t[i]==max)
   {
       if(t[i]==min&&flag1==0)
       {
        count++;
        flag1=1;
       }
       if(t[i]==max&&flag2==0)
       {
           count++;
           flag2=1;
       }
   }
}
if(flag==1)
printf("Incorrect");
else
{
if(temp>=2-count)
    printf("Correct");
else
    printf("Incorrect");
}
return 0;
}
