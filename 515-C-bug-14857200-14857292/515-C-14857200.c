#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
	return -*(int *)a+*(int *)b;
}
int main(int argc, char *argv[])
{
	int n,a[19],f[19],i,j,temp1,temp2,ans[100];
	scanf("%d ",&n);
	char s[20];
	scanf("%s",s);
	for(i=0;i<n;i++)
	a[i]=s[i]-'0';
	j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==2 || a[i]==3 || a[i]==5 || a[i]==7)
		ans[j++]=a[i];
		else if(a[i]!=1 && a[i]!=0)
		{
			if(a[i]==4)
			{
				ans[j++]=3;ans[j++]=2;ans[j++]=2;
			}
			else if(a[i]==6)
			{
				ans[j++]=5;ans[j++]=3;
			}
			else if(a[i]==8)
			{
				ans[j++]=7;ans[j++]=2;ans[j++]=2;ans[j++]=2;
			}
			else if(a[i]==9)
			{
				ans[j++]=7;ans[j++]=3;ans[j++]=3;	ans[j++]=2;ans[j++]=2;ans[j++]=2;
			}
		}
	}
	qsort(ans,j,sizeof(int),cmp);
	for(i=0;i<j;i++)
		printf("%d",ans[i]);
	printf("\n");
	return 0;	
}
