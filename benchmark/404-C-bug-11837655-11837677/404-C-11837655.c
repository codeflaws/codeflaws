#include<stdio.h>
void merge(int a[][3],int lo,int mi,int hi,int k)
{
	int i,j,c,b;
	c=mi-lo+1;
	b=hi-mi;
	int left[c][3],right[b][3];
	for(i=0;i<c;i++)
	{
		left[i][k]=a[lo+i][k];
		left[i][1-k]=a[lo+i][1-k];
	}
	for(i=0;i<b;i++)
	{
		right[i][k]=a[mi+i+1][k];
		right[i][1-k]=a[mi+i+1][1-k];
	}
	for(i=0,j=0;i<c && j<b;)
	{
		if(left[i][k]<=right[j][k])
		{
			a[lo+i+j][k]=left[i][k];
			a[lo+i+j][1-k]=left[i][1-k];
			i++;
		}
		else
		{
			a[lo+i+j][k]=right[j][k];
			a[lo+i+j][1-k]=right[j][1-k];
			j++;
		}
	}
	while(i!=c)
	{
		a[lo+i+j][1-k]=left[i][1-k];
		a[lo+i+j][k]=left[i][k];
		i++;
	}
	while(j!=b)
	{
		a[lo+i+j][1-k]=right[j][1-k];
		a[lo+i+j][k]=right[j][k];
		j++;
	}
	return;
}
void mergesort(int a[][3],int lo,int hi,int k)
{
	if(lo>=hi)
		return;
	int mi=(lo+hi)/2;
	mergesort(a,lo,mi,k);
	mergesort(a,mi+1,hi,k);
	merge(a,lo,mi,hi,k);
	return;
}
int main(int argc, char *argv[])
{
	int n,k,arr[100005][3],i,q[100005][3],st=0,en=1,p=2,a[100005][2],c=0,sta=0;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i][0]);
		arr[i][1]=i;
	}
	mergesort(arr,1,n,0);
	if(arr[1][0]!=0)
	{
		sta=1;
		p--;
	}
	q[st][0]=0;
	q[st][1]=arr[1][1];
	q[st][2]=0;
	while(st<=en && p<=n && sta==0)
	{
		if(q[st][0]+1==arr[p][0] && q[st][2]<k)
		{
			a[c][0]=q[st][1];
			a[c][1]=arr[p][1];
			q[en][0]=arr[p][0];
			q[en][1]=arr[p][1];
			q[en][2]=1;
			q[st][2]++;
			en++;
			c++;
			p++;
		}
		else
			st++;
	}
	if(p==n+1)
	{
		printf("%d\n",c);
		for(i=0;i<c;i++)
			printf("%d %d\n",a[i][0],a[i][1]);
	}
	else
		printf("-1\n");
	return 0;
}
