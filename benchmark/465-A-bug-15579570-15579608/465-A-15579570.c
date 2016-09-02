#include<stdio.h>
int main(int argc, char *argv[])
	{int n,i;
	char a[100];scanf("%d%s",&n,a);
	for(i=1;a[i]=='1';i++);
	i+1>n?printf("%d",i):printf("%d",i+1);
	return 0;
	}
		
