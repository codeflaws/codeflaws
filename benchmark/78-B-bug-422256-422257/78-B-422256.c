#include <stdio.h>
int main(int argc, char *argv[])
{
	char a[100],b[8];
	int i=0,n=0,k=0,q=0,u=0;
	scanf("%d",&n);
	b[0]='R';
	b[1]='O';
	b[2]='Y';
	b[3]='G';
	b[4]='B';
	b[5]='I';
	b[6]='V';
	b[7]='R';


	for(i=0;i<n;i++)
	{
		if (k==i%7)
			u=0;
			//b[u]=b[0];
		a[i]=b[u];
		u++;
		//printf("%c",b[i]);
		/*
		if (a[n-2]==a[1])
			for(f=3;f<=5;f++)
				if (a[n-f]==a[n-2])
				*/
	}
	    if (a[n-3]==a[0])
			a[n-3]='G';
		//	printf("B");
		if (a[n-2]==a[1])
			a[n-2]='B';
			//printf("I");
		if (a[n-1]==a[2])
			a[n-1]='I';
			//printf("V");
		if (a[n-2]==a[0])
		{
			a[n-2]='Y';
			a[n-1]='G';
		
		}

		if (a[n-1]==a[0])
			a[n-1]='G';



	for(i=0;i<n;i++)
		printf("%c",a[i]);





return 0;
}
