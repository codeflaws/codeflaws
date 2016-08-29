#include<stdio.h>
int main(int argc, char *argv[])
{
	int k,x,z,i,j,n,m,arr[105][105],s=0,x1=0,x2=0,top=0;
	scanf("%d %d",&k,&n);
	for(i=0 ; i<k/n ; i++)
		for(j=0 ; j<n ; j++)
			scanf("%d",&arr[i][j]);
	for(j=0 ; j<n ; j++)
	{	
		for(i=0 ; i<k/n ; i++)
		{
			if(arr[i][j]==1)
				x1++;
			else if(arr[i][j]==2)
				x2++;
		}
		if(x1>x2)
		{
			for(i=0 ; i<k/n ; i++)
				if(arr[i][j]==2)
					s++;
		}
		else if(x2>x1)
		{
			for(i=0 ; i<k/n ; i++)
				if(arr[i][j]==1)
					s++;
		}	
		else if(x1==x2)
			s++;
		top+=s;
		x1=0;
		x2=0;
		s=0;
	}
	printf("%d",top);
	return 0;
}
