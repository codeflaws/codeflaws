#include<stdio.h>

int main(int argc, char *argv[])
{
	int a[3]={0}, n, i, tmp, pairs;
	scanf(" %d", &n);
	for(i=0; i<n; i++)
	{
		scanf(" %d", &tmp);
		a[tmp%3]++;
	}
	if(a[1]>=a[2])
		pairs=a[0]/2 + a[2];
	else
		pairs=a[0]/2 + a[1];
	printf("%d", pairs);
	return 0;
}
