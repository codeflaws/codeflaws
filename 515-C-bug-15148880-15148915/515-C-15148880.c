#include<stdio.h>
#include<string.h>
int cmp(const void* a,const void* b)
{
	return (*(int* )b - *(int* )a);
}
int arr[20],ans[1000000];
char ch[20];
int main(int argc, char *argv[])
{
	int i,n;
	scanf("%d",&n);
	scanf("%s",ch);
	int len = strlen(ch);
	for(i=0;i!=len;i++)
	{
		arr[i] = (int)((int)ch[i] - 48);
	}
	i = 0;
	int j = 0;
	while(i<n)
	{
		if(arr[i] == 2)
		{
			ans[j] = 2;
			j = j + 1;
			i = i + 1;
		}
		else if(arr[i] == 3)
		{
			ans[j] = 3;
			j = j + 1;
			i = i + 1;	
		}
		else if(arr[i] == 4)
		{
			ans[j] = 3;
			j = j + 1;
			ans[j] = 2;
			j = j + 1;
			ans[j] = 2;
			j = j + 1;
			i = i + 1;
		}
		else if(arr[i] == 5)
		{
			ans[j] = 5;
			j = j + 1;
			i = i + 1;
		}
		else if(arr[i] == 6)
		{
			ans[j] = 5;
			ans[j+1] = 3;
			j = j + 2;
			i = i + 1;
		}
		else if(arr[i] == 7)
		{
			ans[j] = 7;
			j = j + 1;
			i = i +1;
		}
		else if(arr[i] == 8)
		{
			ans[j] = 7;
			j = j + 1;
			ans[j] = 2;
			j = j + 1;
			ans[j] = 2;
			j = j + 1;
			ans[j] = 2;
			j = j + 1;
			i = i + 1;
		}
		else if(arr[i] == 9)
		{
			ans[j] = 7;
			j = j + 1;
			ans[j] = 3;
			j = j + 1;
			ans[j] = 3;
			j = j + 1;
			i = i + 1;
		}
		else
		{
			i = i + 1;
		}
		
	}
	qsort(ans,j,sizeof(ans[0]),cmp);
	for(i=0;i!=j;i++)
	{
		printf("%d",ans[i]);
	}
	printf("\n");
	return 0;
}
