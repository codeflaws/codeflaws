#include<stdio.h>
int main(int argc, char *argv[])
{
	int m,n,i,j,cnt[120],index[120];
	long int a[120][120],max[120];
	for(i=0;i<110;i++)
	{max[i]=0;cnt[i]=0;}
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{scanf("%ld",&a[i][j]);
			if(max[i]<a[i][j])
			{max[i]=a[i][j];index[i]=j+1;}
		}
	for(i=0;i<m;i++)
	{cnt[index[i]]++;}
	int bax=0,cas;
	for(i=1;i<=n;i++)
		if(cnt[i]>bax)
		{bax=cnt[i];cas=i;}
	printf("%d\n",cas);
	
return 0;
}
