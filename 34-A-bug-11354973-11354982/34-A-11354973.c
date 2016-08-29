#include<stdio.h>
#define abs(a) (a>0?(a):-(a))
int n,i,j,m,a,z=1000,t=1,s,d;
int main(int argc, char *argv[])
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(!i) m=d=a;
		else
		{
			if(abs(a-d)<z)
				z=abs(a-d),t=i,s=i+1;
			if(i==n-1) {if(abs(m-a)<z) t=n,s=1;}

			d=a;
		}
	}
	printf("%d %d %d",t,s,z);
	return 0;;
}
