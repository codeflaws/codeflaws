#include<stdio.h>
int main(int argc, char *argv[])
{
int n,i,t,c=1,p;
scanf("%d",&n);
int ans[n];
for(i=0;i<n;i++)
ans[i]=0;
scanf("%d",&p);
int a[p];
for(i=0;i<p;i++)
{
	scanf("%d",&a[i]);
	ans[a[i]-1]=1;
}
int q;
scanf("%d",&q);
int b[q];
for(i=0;i<q;i++)
{
scanf("%d",&b[q]);
	ans[b[i]-1]=1;
}
for(i=0;i<n;i++)
{
	if(ans[i]!=1)
	{
		c=0;
		break;
	}
}
if(c==1) printf("I become the guy.");
else printf("Oh, my keyboard!");
return 0;
}

