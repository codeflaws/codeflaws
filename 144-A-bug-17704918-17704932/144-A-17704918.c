#include<stdio.h>
int main(int argc, char *argv[])
{
	int n;
	scanf("%d",&n);
	int ara[n];
	int i,j,k,l,max=0,min=102,maxpos,minpos,temp,temp2,t,count=0,count2=0;
	for(k=0;k<n;k++)
		scanf("%d",&ara[k]);
	for(l=0;l<n;l++)
	{
		if(ara[l]>=max)
		{
			maxpos=l;
			max=ara[l];
		}
		if(ara[l]<=min)
		{
			minpos=l;
			min=ara[l];
		}

	}
	if(maxpos<minpos)
		printf("%d",maxpos+n-1-minpos);
	else
		printf("%d",maxpos+n-1-minpos-1);

return 0;
}