#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	char min=':',str[15],arr[15];
	gets(str);
	gets(arr);
	int i,j,t,k;
	t = strlen(str);
	k= strlen(arr);
	if (t != k )
	{//
		printf("WRONG_ANSWER");
	return 0;
	}
	if(str[0] == '0')
	{	
		printf("OK");
		return 0;
	}
	for (i=0;i<t;i++)
	{
		for (j=0;j<t;j++)
			if (str[j] < min && !(i == 0 && str[j] =='0'))
			{
				min=str[j];
				k=j;
			}
		str[k] = ':';
		if (min == arr[i])
		{
			min = ':';
			continue;
		}
		printf("WRONG_ANSWER");
		return 0;
	}
	printf("OK");
	return 0;
}
