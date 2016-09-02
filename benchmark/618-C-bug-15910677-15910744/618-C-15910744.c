#include <stdint.h>
#include <stdint.h>
#include <stdio.h>
#include <math.h>

int judge(double a1,double a2,double b1,double b2,double c1,double c2,double d1,double d2);
int judge(double a1,double a2,double b1,double b2,double c1,double c2,double d1,double d2)
{
	if (fabs(a1-b1)<1e-8)
	{
		if ((d1-a1)<1e-8) return 0;
		if ((c1-a1)*(d1-a1)>0) return 1;
		return -1;
	}
	double k = (b2-a2)/(b1-a1);
	if (((d1-a1)*k+a2-d2)*((c1-a1)*k+a2-c2)>0) return 1;
	if (((d1-a1)*k+a2-d2)*((c1-a1)*k+a2-c2)<0) return -1;
	return 0;	
}

int check(double a1,double a2,double b1,double b2,double c1,double c2);
int check(double a1,double a2,double b1,double b2,double c1,double c2)
{
	if (fabs(a1-b1)<1e-8&&fabs(c1-b1)<1e-8) return 0;
	if (fabs(a1-b1)<1e-8&&fabs(c1-b1)>1e-8) return 1;
	double k = (b2-a2)/(b1-a1);
	if (fabs((c1-a1)*k+a2-c2)<1e-8)return 0;
	return 1;
}
int main(int argc, char *argv[])
{
	double x1,y1,x2,y2,x3,y3,x,y;
	int n,k,i,a=1,b=2,c=3;
	scanf("%d",&n);
	scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
	k=4;
	while (k<=n&&check(x1,y1,x2,y2,x3,y3)==0)
	{
		if (fabs(x1-x2)<1e-8&&fabs(x1-x3)<1e-8)
		{
			if (y1>y2&&y1>y3){a=k;scanf("%lf%lf",&x1,&y1);k++;continue;}
			if (y2>y1&&y2>y3){b=k;scanf("%lf%lf",&x2,&y2);k++;continue;}
			if (y3>y1&&y3>y2){c=k;scanf("%lf%lf",&x3,&y3);k++;continue;}
		}
		else
		{
			if (x1>x2&&x1>x3){a=k;scanf("%lf%lf",&x1,&y1);k++;continue;}
			if (x2>x1&&x2>x3){b=k;scanf("%lf%lf",&x2,&y2);k++;continue;}
			if (x3>x1&&x3>x2){c=k;scanf("%lf%lf",&x3,&y3);k++;continue;}
		}
	}
	for (i = k; i <= n; i++)
	{
		scanf("%lf%lf",&x,&y);
		if (judge(x1,y1,x2,y2,x3,y3,x,y)<0||judge(x3,y3,x1,y1,x2,y2,x,y)<0||judge(x3,y3,x2,y2,x1,y1,x,y)<0) continue;
		if (judge(x1,y1,x2,y2,x3,y3,x,y)>0&&judge(x3,y3,x1,y1,x2,y2,x,y)>0)
		{
			x2=x;
			y2=y;
			b=i;
			continue;
		}
		if (judge(x1,y1,x2,y2,x3,y3,x,y)>0&&judge(x3,y3,x2,y2,x1,y1,x,y)>0)
		{
			x1=x;
			y1=y;
			a=i;
			continue;
		}
		if (judge(x3,y3,x2,y2,x1,y1,x,y)>0&&judge(x3,y3,x1,y1,x2,y2,x,y)>0)
		{
			x1=x;
			y1=y;
			a=i;
			continue;
		}
	}
	printf("%d %d %d",a,b,c);
        return 0;
}
