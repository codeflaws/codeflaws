#include<stdio.h>
int main(int argc, char *argv[])
{
int n,m,k,i=0,x,y,s,t,sum=1,count=0;
int a[50];
scanf("%d %d %d",&n,&m,&k);
s=n;
while(n--)
scanf("%d",&a[i++]);
for(x=0;x<=s-2;x++)
{
    for(y=0;y<=s-2-x;y++)
    {
        if(a[y]<a[y+1])
        {
            t=a[y];
            a[y]=a[y+1];
            a[y+1]=t;
        }
    }
}
if(m<k)
{
    printf("0");
    return 0;
}
sum=k;
for(x=0;x<=s-1;x++)
{
    sum=sum-1;
    if(k>0)
    {
    k=k-1;
    sum=sum+a[x];
    count++;
    if(sum>=m)
    {

        printf("%d",count);
        return 0;
    }
    }
    else
    {
        sum=(sum)+a[x];
        count++;
        if(sum>=m)
    {
        printf("%d",count);
        return 0;
    }
    }
}
printf("-1");
return 0;
}





