#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,i,f,g,j;
	scanf("%d",&n);
	i=1;
	f=1;
	for (j=1;j<=(n-1);j++){
		f=f+i;
		i=i+1;
		g=f%n;
		if (g==0){
			g=n;
		}
		printf("%d ",g);
	}
	return 0;
}
