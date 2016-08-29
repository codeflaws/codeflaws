#include <stdio.h>
void islucky(int x)
{
	int a=0;
	while(1)
	{
		if(a==4 || a==7)
		{
			printf("YES\n");
			break;
		}
		else if(x!=0)
		{
			a=x%10;
			x=x/10;
		}
			
		else
		{
			printf("NO\n");
			break;

		}
			

	}
}
int main(int argc, char *argv[])
{
	long long int x,y,z;
	scanf("%lld",&x);
	y=0;
	while(x>0)
	{
		z=x%10;
		x=x/10;
		if(z==4 || z==7)
		y++;
	}
	islucky(y);
	return 0;
	

}