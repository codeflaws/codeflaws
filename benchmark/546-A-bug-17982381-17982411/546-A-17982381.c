#include <stdio.h>
int main(int argc, char *argv[])
{
	int k,n,w,s=0;
	scanf("%d%d%d",&k,&n,&w);
	while(w>0)
	{
		s=s+k*w;
		w--;
	}
	s=s-n;
	printf("%d",s);
	return 0;
}
