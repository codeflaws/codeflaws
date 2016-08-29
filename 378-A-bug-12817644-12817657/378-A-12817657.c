#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(int argc, char *argv[])
	{
	int a,b,wa=0,d=0,wb=0,i;
	scanf("%d %d",&a,&b);
	for(i=1;i<=6;i++)
		{
		if(abs(i-a)==abs(i-b))
			d++;
		else if(abs(i-a)<abs(i-b))
			wa++;
		else
			wb++;
		}
	printf("%d %d %d\n",wa,d,wb);
	return 0;
	}