#include<stdio.h>
#include<math.h>
int sai(const void* a,const void* b)
{
	return *(int*)a-*(int*)b;
}
int main(int argc, char *argv[])
{
	int n,m,a[101],i,j,k,c=0,s=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	qsort(a,n,sizeof(int),sai);
	for(i=0;i<n;i++)
	{
		if(c<=m)
		{
			if(a[i]<0)
			{
				s+=a[i];
				c+=1;
			}
		}
		else
		{
			break;
		}
	}
	printf("%d\n",(-s));
	return 0;
}
