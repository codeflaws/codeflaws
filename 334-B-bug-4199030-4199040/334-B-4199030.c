#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b)
{
	if(*(int*)a==*(int*)b)
		return (*(((int*)a)+1))>(*(((int*)b)+1));
	return *(int*)a>*(int*)b;
}

int main(int argc, char *argv[])
{
	int a[8][2],i;
	for(i=0;i<8;i++)
		scanf("%d%d",&a[i][0],&a[i][1]);
	qsort(a,8,2*sizeof(int),cmp);
	for(i=0;i<8;i++)
		printf("\n%d %d\n",a[i][0],a[i][1]);
	for(i=0;i<7;i++)
		if(a[i][0]==a[i+1][0]&&a[i][1]==a[i+1][1])
		{printf("ugly\n");return 0;}
	if(a[0][0]==a[1][0]&&a[1][0]==a[2][0]&&a[3][0]==a[4][0]&&a[5][0]==a[6][0]&&a[6][0]==a[7][0])
	{
		if(a[0][1]==a[3][1]&&a[3][1]==a[5][1]&&a[1][1]==a[6][1]&&a[2][1]==a[4][1]&&a[4][1]==a[7][1])
			printf("respectable\n");
		else
			printf("ugly\n");
	}
	else printf("ugly\n");
	return 0;
}