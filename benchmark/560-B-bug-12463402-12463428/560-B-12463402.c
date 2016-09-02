#include<stdio.h>
int a1,b1,a2,b2,a3,b3,i,k,t;
int main(int argc, char *argv[])
{
	scanf("%d%d%d%d%d%d",&a1,&b1,&a2,&b2,&a3,&b3);
	
	if((a1>=a2+a3&&b1>=b2&&b1>=b3)||(a1>=a2+b3&&b1>=b2&&b1>=a3)||(a1>=b2+a3&&b1>=a2&&b1>=b3)||(a1>=b2+b2&&b1>=a2&&b1>=a3)||(b1>=a2+a3&&a1>=b2&&a1>=b3)||(b1>=a2+b3&&a1>=b2&&a1>=a3)||(b1>=b2+a3&&a1>=a2&&a1>=b3)||(b1>=b2+b2&&a1>=a2&&a1>=a3))
		printf("YES");
	else
		printf("NO");
	return 0;
}
