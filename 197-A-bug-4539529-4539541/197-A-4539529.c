#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,m,r;
	scanf("%d %d %d",&n,&m,
			&r
	     );
	int d=2*r;
	int row=n/d;
	int col=m/d;
	int y=row*col;
	if(y%2==0)
		printf("Second\n");
	else
		printf("First\n");
	return 0;
}
