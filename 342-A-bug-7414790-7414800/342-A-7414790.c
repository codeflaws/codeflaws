#include<stdio.h>
#include<stdlib.h>
int ar[8];
 main(int argc, char *argv[])
{

	int i,n;
	int a,a2,a3,d;
	a=a2=a3=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&d);
		if(d==5 || d==7)
		{	printf("-1");exit(0);}
		
		ar[d]++;}
	while(1)
	{
		if(ar[1]!=0 && ar[2]!=0 && ar[4]!=0)
		{	ar[1]--;ar[2]--;ar[4]--;
			a++;	}
		else
			break;
	}
	while(1)
	{
		if(ar[1]!=0 && ar[2]!=0 && ar[6]!=0)
		{	ar[1]--;ar[2]--;ar[6]--;a2++;}
		else
			break;
	}
	while(1)
	{	if(ar[1]!=0 && ar[3]!=0 && ar[6]!=0)
		{	ar[1]--;ar[3]--;ar[6]--;a3++;}
		else
			break;
	}
	printf("%d%d%d\n",a,a2,a3);
	for(i=1;i<=7;i++)
	{	
		if(ar[i]!=0)
		{
			printf("%d\n",i);
			printf("-1");
			exit(0);
		}
	}
	while(a--)
		printf("1 2 4\n");
	while(a2--)
		printf("1 2 6\n");
	while(a3--)
		printf("1 3 6\n");
	exit(0);
return 0;
}
