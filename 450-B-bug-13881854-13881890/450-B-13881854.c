/*我的总结
 * fn=ax+by
 * f1 =x     a=1 ,b=0
 * f2 =y     a=0 ,b=1
 * f3 =-x+y  a=-1,b=1
 * f4 =-x    a=-1,b=0
 * f5 =-y    a=0 ,b=-1
 * f6 =x-y   a=1 ,b=-1
 * f7 =x     a=1 ,b=0
 * f8 =y     a=0 ,b=1
 * f9 =-x+y  a=-1,b=1
 * f10=-x    a=-1,b=0
 * f11=-y    a=0 ,b=-1
 * f12=x-y   a=1 ,b=-1
 * f13=x     a=1 ,b=0
 * f14=y     a=0 ,b=1
 * */
/*interface*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define M 1000000007
int fib(int n) {
	double z=sqrt(5.0);
	double x=(1+z)/2;
	double y=(1-z)/2;
	//这是一个超级大的一个数，用通项公式也不行！
	//int res=(int)((pow(x,n)-pow(y,n))/2+0.5)%M;
	int res=(int)((pow(x,n)-pow(y,n))/2)%M;
	return res;
}
/*interface implementation*/
/*client*/
int main(int argc, char *argv[]) {
	int x,y;
	scanf("%d%d",&x,&y);
	int n;
	scanf("%d",&n);
	int fn;
	int a[6];
	a[2]=0;
	a[3]=-1;
	a[4]=-1;
	a[5]=0;
	a[0]=1;
	a[1]=1;

	int b[6];
	b[2]=1;
	b[3]=1;
	b[4]=0;
	b[5]=-1;
	b[0]=-1;
	b[1]=0;
	fn=a[n%6]*x+b[n%6]*y;
	printf("%d=%d*%d+%d*%d\n",fn,a[n%6],x,b[n%6],y);
	fn=fn%M;
	if(fn<0) fn=M+fn;
	printf("%d\n",fn%M);

	return 0;
}
