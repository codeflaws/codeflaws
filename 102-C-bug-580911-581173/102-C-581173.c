#include<stdio.h>
#include<string.h>
int che[1000010];
void mergesort(int arr[],int t)
{
	if(t<=1)
		return;
	mergesort(arr,t/2);
	mergesort(&arr[t/2],t-t/2);
	int i=0,j=t/2,k=0;
	while(i<t)
	{
		if(j==t)
		{
			che[i]=arr[k];
			k++;
		}
		else if(k==t/2 || arr[k]>arr[j])
		{
			che[i]=arr[j];
			j++;
		}
		else 
		{
			che[i]=arr[k];
			k++;
		}
		i++;
	}
	i=0;
	while(i<t)
	{
		arr[i]=che[i];
		i++;
	}
}
int main(int argc, char *argv[])
{
	char s[100010];
	int i,j,m,n,k;
	scanf("%s",s);
	scanf("%d",&k);
	n=strlen(s);
	int ans,st[30]={0},arr[30]={0},so[30]={0};
	for(i=0;i<n;i++)
	{
		arr[s[i]-97]++;
		so[s[i]-97]++;
	}
	mergesort(so,26);
	for(i=0;i<26;i++)
	{
		j=0;
		int flag=1;
		do{
			if(flag!=1)
				j++;
			flag=0;
			for(;j<26 && so[i]!=arr[j] ;)
			{
				j++;
			}
		}while(st[j]!=0);
		st[j]=1;
		if(k>=arr[j])
		{
			k-=arr[j];
			arr[j]=0;
		}

	}
	ans=0;
	for(i=0;i<26;i++)
	{
		if(arr[i]>0)
			ans++;
	}
	printf("%d\n",ans);
	for(i=0;i<n;i++)
	{
		if(arr[s[i]-97]>0)
		{
			arr[s[i]-97]--;
			printf("%c",s[i]);
		}
	}
	printf("\n");
	return 0;
}
