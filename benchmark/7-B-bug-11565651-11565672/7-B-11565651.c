#include<stdio.h>
int main(int argc, char *argv[])
{
	char s[50];
	int t,m,k=1,arr[105]={0},i,c,j,st,x;
	scanf("%d %d",&t,&m);
	while(t--)
	{
		scanf("\n%s",s);
		if(s[0]=='a')
		{
			scanf("%d",&x);
			st=0;
			for(i=0;i<m;i++)
				if(arr[i]==0)
				{
					c=0;
					j=i;
					for(;i<m;i++)
						if(c<x && arr[i]==0)
							c++;
						else
							break;
					if(c==x)
					{
						st=1;
						for(i=j;i<j+x;i++)
							arr[i]=k;
						k++;
					}
					if(st==1)
					{
						printf("%d\n",k-1);
						break;
					}
				}
			if(st==0)
				printf("NULL\n");
		}
		else if(s[0]=='e')
		{
			st=0;
			scanf("%d",&x);
			for(i=0;i<m;i++)
				if(arr[i]==x)
				{
					st=1;
					arr[i]=0;
				}
			if(st==0 && x==0)
				printf("ILLEGAL_ERASE_ARGUMENT\n");
		}
		else
		{
			st=0;
			for(i=0;i<m && st==0;i++)
				if(arr[i]==0)
				{
					for(j=i;j<m;j++)
						if(arr[j]!=0)
							break;
					if(j==m)
						st=1;
					else
						while(arr[j]!=0 && j<m)
						{
							arr[i]=arr[j];
							arr[j]=0;
							i++;
							j++;
						}
					i--;
				}
		}
//		for(i=0;i<m;i++)
//			printf("%d ",arr[i]);
//		printf("\n");
	}
	return 0;
}
