#include <stdio.h>

int n, m;
int x[1100], y[1100];

int main(int argc, char *argv[])
{
	int i, j, res=0, a, b;
	
	scanf(" %d %d",&n,&m);
	
	for(i=0;i<m;i++)
	{
		scanf(" %d %d",&a,&b);
		x[a]=1; y[b]=1;
	}
	
	for(i=2;i<n;i++)
		if(!x[i])
			res++;
		
	if(n%2 && !x[n/2+1] && !y[n/2+1]) res--;
	
	printf("%d\n",res);
	
	return 0;	
}
