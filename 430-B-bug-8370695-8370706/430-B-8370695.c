#include<stdio.h>
int main(int argc, char *argv[])
{ int l, r, n, k, x , i,j, flagl, flagr,flag,y, max=0, t =6;
int a[1000];
while(t--)
{
max=0;
scanf("%d %d %d",&n,&k,&y);
for(i=0; i<n; i++)
scanf("%d",&a[i]);
for(i=1;i<2*n+1;i+=2)
{
 j= 0;k= 0;
l=(i-(i%2))*0.5;
r=((i%2)+i)*0.5;	 
if(a[l]==a[r] && a[l]==y)
{x=y;
  while(l>=k||r+j<n)
{
 flagl= 0; flagr=0;flag=0;
if (a[l-k]!=x) 
{
 flagl=1;
}
else k++;
if(a[r+ j]!= x)
flagr=1;
else j++;
if(flagl==1&& flagr==1)
{
if(a[l-k+2]!=x&&a[r+j-2]!=x)
{
flag=1;
break;
}
else if(a[l-k]==a[r+j])
{
flagr= 0; flagl=0;
x=a[l-k];
}
else break;
}
} 
if (flag==0)
{if(j+ k> max)
max= j+k; }
else  if(j+ k-2> max)
max= j+k-2;
}
}
printf("%d \n", max);
}
return 0;
}