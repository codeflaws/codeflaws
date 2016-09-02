#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char *argv[])
{
double x[2],y[2],r[2],R[2],distance;
int answer;
scanf("%lf%lf%lf%lf",&x[0],&y[0],&r[0],&R[0]);
scanf("%lf%lf%lf%lf",&x[1],&y[1],&r[1],&R[1]);
distance=sqrt((x[1]-x[0])*(x[1]-x[0])+(y[1]-y[0])*(y[1]-y[0]));
if(R[0]>R[1])
	{
	R[1]=R[1]+R[0];
	R[0]=R[1]-R[0];
	R[1]=R[1]-R[0];
	r[1]=r[1]+r[0];
	r[0]=r[1]-r[0];
	r[1]=r[1]-r[0];
	}
if(distance>=R[0]+R[1])answer=4;
else
{
	if(distance+R[0]>R[1])//not completely inside outer circle
	{
		if(distance<r[1]+R[0] && distance+r[1]>R[0])//intersected inner circle
		{
		if(r[0]+R[1]<=distance)answer=1;
		else if(r[0]+distance<=r[1])answer=1;
		else answer=0;
		}
		else if(distance+r[1]<=R[0])
		{
		if(distance>=R[1]+r[0])answer=1;
		else if(r[1]+distance<=r[0])answer=1;
		else if(r[0]+distance<=r[1])answer=1;
		else answer=0;
		}
		else// disjoint with inner circle
		{
		printf("Disjoint with inner circle\n");
		if(distance>=R[1]+r[0])answer=2;
		else answer=1;
		}
	}
	else//completely inside outer circle
	{
	if(distance>=r[1]+R[0])answer=2;//disjoint with inner circle
	else if(distance+r[1]<=R[0])
	{
    if(distance>=r[0]+r[1] && distance+r[0]<=R[1] && distance+r[1]<=R[0])answer=1;
	else if(distance>=r[0]+r[1])answer=2;
	else if(distance+r[0]<=r[1])answer=2;
	else if(distance+r[1]<=r[0])answer=2;
	else answer=1;
	}
	else if(distance+R[0]>r[1])//not completely inside inner circle
	{
	if(distance+r[0]<=r[1])answer=2;
	else answer=1;
	}
	else  answer=4;
	}
}
printf("%d\n",answer);
return 0;
}
