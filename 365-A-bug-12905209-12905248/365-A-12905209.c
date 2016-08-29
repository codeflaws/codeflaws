#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int n,k,res=0,i,j,len,sum;
	scanf("%d %d",&n,&k);
	int flag[k+1];
	char str[12];
	while(n--)
	{
		scanf("%s",str);
		len=strlen(str);
		for(i=0;i<=k;i++)
			flag[k]=0;
		for(i=0;i<=k;i++)
		{
			for(j=0;j<len;j++)
			{
				 if(str[j]-48==i)
				 {
				 	flag[i]=1;
				 	break;
				 }
			}
		}
		sum=0;
		for(i=0;i<=k;i++)
			sum+=flag[i];
		if(sum==k+1)
			res++;
	}
	printf("%d",res);
	return 0;
}