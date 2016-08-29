#include<stdio.h>
int main(int argc, char *argv[])
{
	int n;
	scanf("%d",&n);
	int a[16],chk=0;char c;
	int i,j=0;
	int b[10]={0};
	for(i=0;i<16;i++)
		{	scanf(" %c",&c);
			if(c!='.')
			{	int b=c;
				b-=48;
				a[j++]=b;
			}
		}
	

	for(i=0;i<j;i++)
	{
		b[a[i]]++;
	}
	for(i=0;i<10;i++)
	{	if(b[i]>(2*n))
		{	chk=1;
			printf("%d",b[i]);
		}
	}
	if(chk)
	{	printf("NO");
	}
	else{
		printf("YES");
	}
	
			
		
	return 0;
}
