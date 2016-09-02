#include<stdio.h>
int i,s1,s2,s3,s4,s6,n,arr[100000];
int main(int argc, char *argv[])
{
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d",arr+i);
		if (arr[i]==1)s1++;
		if (arr[i]==2)s2++;
		if (arr[i]==3)s3++;
		if (arr[i]==6)s6++;
		if (arr[i]==4)s4++;
	}
	if (s1 != n/3 || s2+s3 != n/3 ||  s4+s6 != n/3 || s4 > s2 || s2 > s4+s6 || s3 > s6)
		puts("-1");
	while(s1)
	{
		printf("1 ");s1--;
		if(s3)
		{
			printf("3 6\n");s3--,s6--;continue;
		}
		if (s2)
		{
			if (s4)
			{
	  			printf("2 4\n");
				s4--;
				s2--;
				continue;
			}
			if (s6)
			{
				printf("2 6\n");
				s6--;
				s2--;
				continue;
			}
		}
	}
	return 0;
}	
