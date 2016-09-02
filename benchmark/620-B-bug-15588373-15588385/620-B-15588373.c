#include<stdio.h>
int a[] = {6,2,5,5,4,5,6,3,7,6};
int s(int n)
{
int r = 0;
while(n){r+= a[n%10];n/=10;}
return r;
}
int main(int argc, char *argv[])
{
int ans = 0;
int n,m;
scanf("%d%d",&n,&m);
int x;
for(x=n;x<=n;x++)
ans+= s(x);
printf("%d\n",ans);
return 0;
}