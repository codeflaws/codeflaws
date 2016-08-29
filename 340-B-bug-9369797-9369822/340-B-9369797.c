//area of triangle=.5*|x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)|
#include<stdio.h>
int main(int argc, char *argv[])
{
int N,i,j,k;
scanf("%d",&N);
double x[N],y[N],quad=0,max1=0,max2=0;
for(i=0;i<N;i++)scanf("%lf%lf",&x[i],&y[i]);
for(i=0;i<N-1;i++)
{
	for(j=i+1;j<N;j++)
	{
		double tr[N];
		for(k=0;k<N;k++)
		{
		tr[k-j-1]=(.500)*((x[i]*(y[j]-y[k]))+(x[j]*(y[k]-y[i]))+(x[k]*(y[i]-y[j])));
			if(tr[k-j-1]<0)
			{
			tr[k-j-1]*=-1;
			if(max2<tr[k-1-j])max2=tr[k-1-j];
			}
			else
			{
			if(max1<tr[k-1-j])max1=tr[k-j-1];
			}
		}
		if(max1+max2>quad)quad=max1+max2;
		max1=0;max2=0;
	}
}
printf("%lf\n",quad);
return 0;
}
