#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int i,cnt1=0,cnt2=0,cnt3;
	char a[100];
	scanf("%s",a);
	int len;
	len=strlen(a);
	i=0;
	while(a[i]!='+')
	{
		cnt1++;
		i++;
	}
	while(a[i+1]!='=')
	{
		cnt2++;
		i++;
	}
	cnt3=len-(cnt1+cnt2+2);
	if((cnt1+cnt2)==cnt3)
		printf("%s\n",a);
	else if(cnt1+cnt2-cnt3==2)
	{
		if(cnt1!=1)
		{
			while((cnt1-1)!=0)
			{	
				printf("|");
				cnt1--;
			}
			printf("+");
			while(cnt2!=0)
			{
				printf("|");
				cnt2--;
			}
			printf("=");
			while((cnt3+1)!=0)
			{
				printf("|");
				cnt3--;
			}
			printf("\n");
		}
		else
		{
			while((cnt1)!=0)
			{
				printf("|");
				cnt1--;
			}
			printf("+");
			while((cnt2-1)!=0)
			{
				printf("|");
				cnt2--;
			}
			printf("=");
			while((cnt3+1)!=0)
			{
				printf("|");
				cnt3--;
			}
			printf("\n");
		}
	}
	else if(cnt3-cnt1-cnt2==2)
	{
			while((cnt1+1)!=0)
			{
				printf("|");
				cnt1--;
			}
			printf("+");
			while((cnt2)!=0)
			{
				printf("|");
				cnt2--;
			}
			printf("=");
			while((cnt3-1)!=0)
			{
				printf("|");
				cnt3--;
			}
			printf("\n");
	}
	else printf("Impossible\n");
	return 0;
}





