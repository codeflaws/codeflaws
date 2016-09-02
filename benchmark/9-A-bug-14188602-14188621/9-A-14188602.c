#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int a,b,c,ans;
	scanf("%d%d",&a,&b);
	if(a<b)
		c=b;
	else
		c=a;
	ans=6-c+1;
	if(ans==2)
		printf("1/3\n");
	else if(ans==3)
		printf("1/2\n");
	else if(ans==4)
		printf("2/3\n");
	else
	printf("%d/%d\n",ans,6);
	return 0;
}
