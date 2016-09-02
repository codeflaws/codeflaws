#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int i=0,j,k,len_max=0,temp,temp1,temp2=0;
	char str[1002][1002];
	int leng[1002];
	while(gets(str[i])!=NULL)
	{
		leng[i]=strlen(str[i]);
		if(leng[i]>len_max)
			len_max=leng[i];
		i++;
	}
	for(j=0;j<len_max+2;j++)
		printf("*");
	printf("\n");
	for(j=0;j<i;j++)
	{
		printf("*");
		temp=(len_max-leng[j])/2;
		temp1=(len_max-leng[j])%2;
		if(temp1==1)
		{
			if(temp2==0)
			{
				temp1=temp;
				temp=temp+1;
				temp2++;
			}
			else if(temp2==1)
			{
				temp1+=temp;
				temp2--;
			}
		}
		for(k=1;k<=temp1;k++)
			printf(" ");
		printf("%s",str[j]);
		for(k=1;k<=temp;k++)
			printf(" ");
		printf("*\n");
	}
	for(j=0;j<len_max+2;j++)
		printf("*");
	printf("\n");
	return 0;
}