#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	int n,s,x[1001]={0},y[1001]={0},i,j,c=0,b[1001]={0};
	scanf("%d %d",&s,&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&x[i],&y[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if((s>=x[j])&&(b[j]==0))
			{
				c+=1;
				s+=y[j];
				b[j]=1;
				break;
			}
		}
	}
	//printf("c is %d\n",c);
//	printf("s is %d\n",s);
	if(c==n)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}
