#include<stdio.h>
int main(int argc, char *argv[])
{
		int n,a[100],i,k,j,largest[100],s=1,z=0,x=0,greater;
		scanf("%d",&n);
		for(i=0;i<n;i++)scanf("%d",&a[i]);
		for(k=1;k<n-1;k++)
		{
				i=k;
				if(s==i)i=i+1;
				{
						largest[z]=(a[i]-a[i-2]);
						for(j=0;j<n-1;j++)
						{
								if((a[j+1]-a[j])>largest[z])largest[z]=a[j+1]-a[j];
						}
				z++;
				s++;
				}
		}
		x=z-1;
		greater=largest[0];
		for(i=1;i<z-1;i++)
		{
				if(largest[i]<greater){greater=largest[i];}
		}
		printf("%d\n",greater);
		return 0;
}



