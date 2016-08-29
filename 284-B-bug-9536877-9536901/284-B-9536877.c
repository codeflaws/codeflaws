#include<stdio.h>
int main(int argc, char *argv[])
{
	int a1,i1,c,n,i,l,j,c1;
	char a[1000006];
	scanf("%d",&n);
	scanf("%s",a);
	//l=strlen(a);
	c=0;i1=0;a1=0;
	for(i=0;i<n;i++)
	{
		if(a[i]=='I')
			i1++;
		if(a[i]=='A')
			a1++;
	}
	if(i1==0)
		printf("%d",a1);
	if(i1==1)
		printf("1");
	return 0;

}
