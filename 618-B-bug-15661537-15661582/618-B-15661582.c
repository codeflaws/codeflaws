#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int e[100][100];
int max (int x,int y)
{
	return x>y?x:y;
}
void work ()
{
    int n;
	scanf ("%d",&n);
	int i;
	int j;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			scanf ("%d",&e[i][j]);
		}
	}
	int a[100]={0};//输出数组
	a[1]=e[1][2];
	int book[100]={0};
	for (i=1;i<=n;i++)
	{
		for (j=i+1;j<=n;j++)
		{
			 if (book[j]==1||book[i]==1) continue;
             if (a[i]>e[i][j])
			 {
				 a[j]=e[i][j];//确定
				 book[j]=1;
			 }
			 else
			 {
				 a[i]=a[j]=max(a[i],e[i][j]);
			 }
		}
	}
	//memset (book,0,sizeof(book));
	int book2[100]={0};
	for (i=1;i<=n;i++)
	{
		if (book[i]==1)
			book2[a[i]]=1;//确定的
	}

	for (i=1;i<=n;i++)
	{
         if (book[i]==1)//确定的
		 {
			 continue;
		 }
		 else 
		 {
			 if (book2[a[i]]==1)
			 {
				 a[i]++;
				 i--;
			 }
			 else book2[a[i]]=1;
		 }
	}


	for (i=1;i<=n;i++)
	{
		if (i==n)
		{
			printf ("%d\n",a[i]);
		}
		else printf ("%d ",a[i]);
	}
	return ;
}
int main(int argc, char *argv[])
{
	work ();
	return 0;
}
