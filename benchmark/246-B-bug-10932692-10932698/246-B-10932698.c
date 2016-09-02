#include<stdio.h>
int comp(const void *a,const void *b)
{
	return *(int*)a-*(int*)b;
}

int main(int argc, char *argv[]){
	int n,i,j,a[100111],sum,p;
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}

	if(sum%n==0)
		p=n;
	else
		p=n-1;

	printf("%d\n",p);

return 0;
}