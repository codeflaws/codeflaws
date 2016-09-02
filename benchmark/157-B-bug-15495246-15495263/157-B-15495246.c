#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979323846
int main(int argc, char *argv[])
{
	int n,i,j;
	double a[2000],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%lf",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		}
	double A1=0;
	//printf("%f",A1);
	double A2=0;
	for(i=0;i<n;i+=2)
	A1=A1+PI*a[i]*a[i];
	for(i=1;i<n;i+=2)
	{
		A2=A2+(PI*a[i]*a[i]);
	}
	printf("%.15lf ",A2);
	double A=A1-A2;
	printf("%.15lf\n",A);
	return 0;
}