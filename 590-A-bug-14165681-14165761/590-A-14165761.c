#include <stdio.h>
#include <string.h>
int n,num[500010],flag[500010];
int main(int argc, char *argv[])
{
	memset(flag,0,sizeof(flag));
	int i,j,k,ans;
	scanf("%d",&n);
	for (i=1;i<=n;i++) scanf("%d",&num[i]);
	for (i=1;i<n;i++) if (num[i]==num[i+1]) flag[i]=flag[i+1]=1;
	i=1;ans=0;flag[1]=flag[n]=1;
	while (i<=n)
	{
		if (!flag[i])
		{
			j=i;
			while (!flag[j]) j++;
			if ((j-i)%2) for (k=i;k<j;k++) num[k]=num[j];
			else for (k=i;k<j;k++) if (k<(i+j)/2) num[k]=num[i-1]; else num[k]=num[j];
			if (j-i>ans) ans=j-i;
			i=j;
		}
		i++;
	}
	printf("%d\n",(ans+1)/2);
	for (i=1;i<=n;i++) {printf("%d",num[i]); if (i<n) printf(" ");}
	printf("\n");
	return 0;
}
