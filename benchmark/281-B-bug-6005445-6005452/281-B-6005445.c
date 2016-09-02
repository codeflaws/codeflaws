#include <stdio.h>
#include <math.h>
double dabs(double a)
{
	if (a<0)
		return -a;
	return a;
}
int main(int argc, char *argv[])
{
	int b,a,x,y,mina,minb,n;
	double fmin=1000000;
	scanf("%d%d%d",&x,&y,&n);
	for(b=1;b<=n;b++){
		double d = (double) x * b / y;
		a = round(d);
		if((x*b)%2==1&&y%2==0)
			a--;
		
		if(fmin>dabs((double)x/(double)y-(double)a/(double)b)){
			fmin=dabs((double)x/(double)y-(double)a/(double)b);
			mina=a;
			minb=b;
		}
	}
	printf("%d/%d\n",mina,minb);
	return 0;
}
