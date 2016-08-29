#include<stdio.h>
int main(int argc, char *argv[])
{
int n,m,max,min,i,j;
scanf("%d%d%d%d",&n,&m,&min,&max);
int a[m],cou=0,count=0;
for(i=0;i<m;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<m;i++)
{
    if(a[i]<min&&a[i]>max)
    {
        count=1;
        break;
    }
}
if(count==0)
{             
for(i=0;i<m;i++)
{
    if(a[i]==min||a[i]==max)
    {
        cou=1;
        break;
    }
}
if(cou==1)
{
    printf("Correct");
}
else
{
    if(n-m>=2)
        printf("Correct");
    else
        printf("Incorrect");
}
}
else
{
    printf("Incorrect");
}
return 0;
}