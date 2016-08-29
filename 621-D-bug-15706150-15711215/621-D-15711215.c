#include <stdio.h>
#include <math.h>
double x,y,z;
int ans;
double num[15];
int main(int argc, char *argv[])
{
	int i;
	for(i=1;i<=12;i++) num[i] = -1e100;
	scanf("%lf%lf%lf",&x,&y,&z);
	if(x<=1&&y<=1&&z<=1)
	{
		num[1] = pow(x,pow(y,z));
		num[2] = pow(x,pow(z,y));
		num[3] = pow(pow(x,y),z);
		num[5] = pow(y,pow(x,z));
		num[6] = pow(y,pow(z,z));
		num[7] = pow(pow(y,x),z);
		num[9] = pow(z,pow(x,y));
		num[10] = pow(z,pow(y,x));
		num[11] = pow(pow(z,x),y);
	}
	else
	{
		if(x>1)
		{
			num[1] = z*log(y)+log(log(x));
			num[2] = y*log(z)+log(log(x));
			num[3] = log(y)+log(z)+log(log(x));
		}
		if(y>1)
		{
			num[5] = z*log(x)+log(log(y));
			num[6] = x*log(z)+log(log(y));
			num[7] = log(x)+log(z)+log(log(y));
		}
		if(z>1)
		{
			num[9] = y*log(x)+log(log(z));
			num[10] = x*log(y)+log(log(z));
			num[11] = log(x)+log(y)+log(log(z));
		}
	}
	for(ans=1,i=2;i<=12;i++) if(num[i]>num[ans]+1e-6) ans = i;
	if(ans == 1) printf("x^y^z");
	else if(ans == 2) printf("x^z^y");
	else if(ans == 3) printf("(x^y)^z");
	else if(ans == 5) printf("y^x^z");
	else if(ans == 6) printf("y^z^x");
	else if(ans == 7) printf("(y^x)^z");
	else if(ans == 9) printf("z^x^y");
	else if(ans == 10) printf("z^y^x");
	else printf("(z^x)^y");
	return 0;
}