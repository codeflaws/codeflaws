#include<stdio.h>
int main(int argc, char *argv[])
{
	int i=0,j,k,m=0,s=0,a[4];
	while(i<4)
	{
		scanf("%d",&a[i]);
		i++;
	}
	for(i=0;i<4;i++)
	{
		for(j=(i+1);j<4;j++)
		{
			for(k=(j+1);k<4;k++)
			{
				if(a[i]+a[j]>a[k]&&(a[i]-a[j]<a[k]&&a[j]-a[i]<a[k]))
			   	s++;
			 if(a[i]+a[j]==a[k]||a[i]+a[k]==a[j]||a[j]+a[k]==a[i])
				m++;
			}
		}
	}
	if(s>0)
	printf("TRIANGLE");
	else
	{
		if(m>0)
		printf("SEGMENT");
		else
		printf("IMPOSSIBLE");
	}
	return 0;
}
