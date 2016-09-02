#include<stdio.h>
int main(int argc, char *argv[])
{
	int k,i,j;
	scanf("%d",&k);
	if(k%2==0) printf("NO");
	else{
		printf("%d %d\n",4*k-2,(2*k-1)*k);
		for(i=1;i<=k-1;i=i+2)
		{
			printf("%d %d\n",i,i+k+1);
			printf("%d %d\n",i+1,i+k);
			printf("%d %d\n",i+1,i+k+1);
			printf("%d %d\n",i,k);
			printf("%d %d\n",i+k,k);
			printf("%d %d\n",i,i+1);
			printf("%d %d\n",i+k,i+k+1);
			i=i+2*k-1;
			printf("%d %d\n",i,i+k+1);
			printf("%d %d\n",i+1,i+k);
			printf("%d %d\n",i+1,i+k+1);
			printf("%d %d\n",i,3*k-1);
			printf("%d %d\n",i+k,3*k-1);
			printf("%d %d\n",i,i+1);
			printf("%d %d\n",i+k,i+k+1);
			i=i-2*k+1;
			for(j=1;j<i;j++)
			{
				printf("%d %d\n",i,j);
				printf("%d %d\n",i+1,j);
				printf("%d %d\n",i+k,j+k);
				printf("%d %d\n",i+1+k,j+k);
				i=i+2*k-1,j=j+2*k-1;
				printf("%d %d\n",i,j);
				printf("%d %d\n",i+1,j);
				printf("%d %d\n",i+k,j+k);
				printf("%d %d\n",i+1+k,j+k);
				i=i-2*k+1,j=j-2*k+1;
			}	
		}
		printf("%d %d\n",k,3*k-1);
	}
	
	return 0;
}
