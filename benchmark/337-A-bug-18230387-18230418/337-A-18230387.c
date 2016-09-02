#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int sai(const void* a,const void* b)
{
	return *(int*)a-*(int*)b;
}
int main(int argc, char *argv[])
{
	int n,m,f[51],i,j,k,c=0,min=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&f[i]);
	}
	qsort(f,n,sizeof(int),sai);
	min=f[n-1]-f[0];
	for(i=0;i<m+1-n;i++)
	{
		if((f[i+n-1]-f[i])<min)
		{
			min=f[i+n-1]-f[i];
		}
	}
	printf("%d\n",min);
	return 0;
}
