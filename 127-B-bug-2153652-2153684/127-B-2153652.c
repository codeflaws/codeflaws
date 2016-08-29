#include<stdio.h>
int sort(int a[], int n);
int main(int argc, char *argv[])
{
int n,a[100],b[100],k=1,m=0,j=0,i,s=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
b[i]=1;
}
sort(a,n);
for(i=0;i<n-1;i++)
{
while(a[i]==a[i+1] && i<n-1)
{
b[j]++;
i++;
}
m=m+b[j]/4;
b[j]=b[j]%4;
if(b[j]%4==2 || b[j]%4==3)
{
b[j]=2;
}
j++;
}
for(i=0;i<j;i++)
{
s=s+b[i];
}
s=s/2;
if(s%2==0)
{
printf("%d",m+s/2);
}
else
{
printf("%d",m+(s-1)/2);
}
return(0);
}
int sort(int a[],int n)
{int i,j,temp;
 for(i=0;i<n-1;i++)
 {
 for(j=0;j<n-1-i;j++)
 {
    if(a[j]>a[j+1])
    {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
    }
  }
 }
 return(0);
}
