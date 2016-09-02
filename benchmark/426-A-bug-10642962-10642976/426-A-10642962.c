#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,threshold;
	scanf("%d%d",&n,&threshold);
	int i,flag=0,data,max=-100,total=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		if(data>max)
			max=data;
		total=total+data;

	}
	if(total-max>=threshold)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;

}