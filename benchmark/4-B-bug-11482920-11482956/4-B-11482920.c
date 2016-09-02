#include<stdio.h>
int d,sum,max[30],min[30];
int main(int argc, char *argv[])
{
	int i,ma=0,mi=0,de,p;
	scanf("%d %d",&d,&sum);
	for(i=0;i<d;i++)
	{
		scanf("%d %d",&min[i],&max[i]);
		ma+=max[i];
		mi+=min[i];
	}
	if(sum>=mi && ma>=sum)
	{
		printf("YES\n");
		de=sum-mi;
		p=0;
		while(de>0)
		{
			if(de>=max[p])
			{
				de+=min[p];
				min[p]=max[p];
				de-=max[p];
			}
			else
			{
				min[p]+=de;
				de=0;
			}
			p++;
		//	printf("%d\n",de);
		}
		for(i=0;i<d;i++)
			printf("%d ",min[i]);
		printf("\n");
	}
	else
		printf("NO\n");
	return 0;
}
