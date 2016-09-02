#include<stdio.h>

int main(int argc, char *argv[])
{
	int n,k,i=0;
	scanf("%d %d",&n,&k);

	char str[n+2];

	scanf("%s",str);

	//printf("%s hello",str);

	while(k>0 && i<n)
	{
		//printf("%d\n",str[i]-'a');

		if((int)(str[i]-'a')>(int)('z'-str[i]))
		{
			if((int)(str[i]-'a')<=k)
			{
				k-=(int)(str[i]-'a');
				str[i]='a';
			}
			else
			{
				str[i]=(char)((int)str[i]-k);
				k=0;
			}
		}
		else
		{
			if((int)('z'-str[i])<=k)
			{
				k-=(int)('z'-str[i]);
				str[i]='z';
			}
			else
			{
				str[i]=(char)((int)str[i]+k);
				k=0;
			}
		}
		i++;
	}
	if(k>0)
		printf("-1\n");
	else
		printf("%s\n",str);
	return 0;
}
