#include<stdio.h>
long long int x,y,n,a;
int main(int argc, char *argv[])
{
	scanf("%lld%lld%lld",&x,&y,&n);
	a=n%6;
	if(!a)x-=y;
	else if(a==2)x=y;
	else if(a==3)x=y-x;
	else if(a==4)x=-x;
	else if(a==5)x=-y;
	if(x<0)x+=1000000007;
	printf("%lld",x%1000000007);
	return 0;
}
