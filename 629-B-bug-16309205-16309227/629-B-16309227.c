#include<stdio.h>
#include<string.h>
#define min(x,y) (x>y ? y:x)
#define max(x,y) (x>y ? x:y)
int v[400][2];
int main(int argc, char *argv[])
{
	int N,a,b,ans;
	char sex;
	memset(v,0,sizeof(v));
	scanf("%d",&N);
	for (int i=0;i<N;i++)
	{
		getchar();
		scanf("%c%d%d",&sex,&a,&b);
		if (sex=='F') sex=0;
		else sex=1;
		for (int j=a;j<=b;j++) v[j][sex]++;
	}
	ans=0;
	for (int i=1;i<=366;i++) ans=max(ans,min(v[i][0],v[i][1])*2);
	printf("%d\n",ans);
	return 0;
}