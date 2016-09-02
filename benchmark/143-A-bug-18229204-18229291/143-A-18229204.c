#include<stdio.h>

int main(int argc, char *argv[])
{
	float r1,r2,c1,c2,d1,d2,x1,x2,x3,x4;
	int a,b,c,d;

	scanf("%f%f%f%f%f%f",&r1,&r2,&c1,&c2,&d1,&d2);

	if((r1+r2!=c1+c2)||(r1+r2!=d1+d2)||(c1+c2!=d1+d2))
		printf("-1");
	else
	{
		x1=(d1-r2+c1)/2;
		x2=(d2+r1-c1)/2;
		x3=(d2-r1+c1)/2;
		x4=(r2-c1+d1)/2;

		a=(int)(x1);
		b=(int)(x2);
		c=(int)(x3);
		d=(int)(x4);

		if(a==x1&&b==x2&&c==x3&&d==x4)
		{
			if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d&&a>0&&b>0&&c>0&&d>0)
				printf("%d %d\n%d %d",a,b,c,d);
			else
				printf("-1");

		}

		else
			printf("-1");

	}

	return 0;
}
