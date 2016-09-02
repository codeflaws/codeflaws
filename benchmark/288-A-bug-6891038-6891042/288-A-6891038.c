#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int n,k,i=1,t,j;
	char c = 'a';
	scanf("%d %d",&n,&k);
	if(n == 1)
	{
		printf("a\n");
		return 0;
	}
	if(n<k || (k == 1 && n != 1))
	{	printf("-1\n");return 0;}
	else
	{
		j = n - (k-2);
		for(i=1;i<=j;i++)
			printf("%c",'a'+ !(i%2));
		for(i=j+1;i<=n;i++)
			printf("%c",'b'+(i-j));
	}
	printf("\n");
	return 0;
}
