#include<stdio.h>
int main(int argc, char *argv[])
{
	int a,b,count=0;
	scanf("%d %d",&a,&b);
	int t[a],i,j;
	for(i=0;i<a;i++)
		scanf("%d",&t[i]);
	for(i=0;i<a;i++)
		if(t[i]>=t[b-1]&&t[b-1]>0)
		count++;
	printf("%d",count);
return 0;
}