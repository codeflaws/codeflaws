#include<stdio.h>
int main(int argc, char *argv[])
{
int s[1000],n,i,val=0,mval=0,pre,j;
scanf("%d",&n);
for(i=0;i<n;i++)
	scanf("%d",&s[i]);
for(i=0;i<n;i++)
{
	val=1;
	pre=s[i];
	for(j=i-1;j>=0;j--)
	{
		if(s[j]<=pre)
		{
			val++;
			pre=s[j];
		}
		else
			break;
	}
	pre=i;
	for(j=i+1;j<n;j++)
	{
		if(s[j]<=pre)
		{
			val++;
			pre=s[j];
		}
		else
			break;
	}
	if(val>mval)
		mval=val;
}
	printf("%d\n",mval);
	return 0;
}
