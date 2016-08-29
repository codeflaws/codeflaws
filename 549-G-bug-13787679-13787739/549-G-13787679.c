#include<stdio.h>
#include<stdlib.h>

int compare(const void *arg1,const void *arg2)
{
	return (*(int *)arg1-*(int *)arg2);
}	

int main(int argc, char *argv[])
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i;
		int input[200000];
		for(i=0;i<n;i++)
			scanf("%d",&input[i]);
		for(i=0;i<n;i++)
			input[i]+=i;

		qsort((void*)input,n,sizeof(input[0]),compare);
		
		int c=1;
		for(i=0;i<n;i++)
		{
			if(input[i]==input[i+1])
				c=0;
		}

		if(c==1 && input[0]!=0)
		{
			for(i=0;i<n;i++)
				printf("%d ",input[i]-i);
		}

		else
			printf(":(");

		puts("");
	}

	return 0;

}
