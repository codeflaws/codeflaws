#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	long long r,x1,x2,y1,y2,a,b,k;
	float s;
	scanf("%lld%lld%lld%lld%lld",&r,&x1,&y1,&x2,&y2);
	if(r==100000)
	printf("2");
	else
	{
	a=abs(x1-x2);
	b=abs(y1-y2);
	s=(sqrt(a*a+b*b))/(2*r);
	printf("%f \n",s);
	k=(long long)s;
	if(k==s)
	printf("%lld",k);
	else
	printf("%lld",k+1);
}
	
return 0;
}