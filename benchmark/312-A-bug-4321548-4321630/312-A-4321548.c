#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int num,i,j;
	char arr[150],c;
	scanf("%d\n",&num);
	for(i=0;i<num;i++)
	{
		j=0;
		scanf("%c",&c);
		while(c!='\n')
		{
			arr[j++]=c;
			scanf("%c",&c);
		}
		int l=j;
		if(j>=5)
		{
			if(arr[0]=='m' && arr[1]=='i' && arr[2]=='a' && arr[3]=='o' && arr[4]=='.' && arr[l-1]=='.' && arr[l-2]=='a' && arr[l-3]=='l' && arr[l-4]=='a' && arr[l-5]=='l')
				printf("OMG>.< I don't know!\n");
			else if(arr[0]=='m' && arr[1]=='i' && arr[2]=='a' && arr[3]=='o' && arr[4]=='.')
				printf("Rainbow's\n");
			else if(arr[l-1]=='.' && arr[l-2]=='a' && arr[l-3]=='l' && arr[l-4]=='a' && arr[l-5]=='l')
				printf("Freda's\n");
			else
				printf("OMG>.< I don't know!\n");
		}
		else
			printf("OMG>.< I don't know!\n");
	}
	return 0;
}
