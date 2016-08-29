#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	char arr[101][101];
	int n,m,i,j,k,s=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%s",arr[i]);
	for(i=1;i<n;)
	{
		if(strcmp(arr[i],arr[i-1]) < 0)
		{
			for(j=0; j<m; j++)
				if(arr[i][j]<arr[i-1][j])
					break;
			for(k=0; k<n; k++)
				arr[k][j]='d';
			s++;
		}
		else
			i++;
	}
	printf("%d\n",s);
	return 0;
}
