#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	long long int width;
	long long int height;
	long long int index;
}node;
node *a;
long long int count=0;
void insert(long long int w,long long int h,long long int in)
{
	count++;
	a[count].width=w;
	a[count].height=h;
	a[count].index=in;
	long long int i=count,flag=0;
	node temp;
	while(i>1)
	{
		if(a[i].height>a[i/2].height)
		{
			flag=1;
			temp=a[i];
			a[i]=a[i/2];
			a[i/2]=temp;
		}
		if(flag==0)
			break;
		flag=0;
	}
}

long long int max(long long int a,long long int b)
{
	if(a>b)
		return a;
	else return b;
}
int main(int argc, char *argv[])
{
	//node *a;
	long long int n,i,height,width,widthsum=0,maxheight,*w;
	scanf("%lld",&n);
	w=malloc(sizeof(long long int)*(n+1));
	a=malloc(sizeof(node)*(n+1));
	for(i=1;i<=n;i++)
	{
		scanf("%lld%lld",&width,&height);
		w[i]=width;
		insert(width,height,i);
		widthsum+=width;
	}
///	printf("%d\n",count);
//	for(i=1;i<=n;i++)
//		printf("%d %d with index=%d\n",a[i].width,a[i].height,a[i].index);
	for(i=1;i<=n;i++)
	{
		if(a[1].index==i)
		{
			if(n>2)
			maxheight=max(a[2].height,a[3].height);
			else maxheight=a[2].height;
		}
		else maxheight=a[1].height;
//		printf("sum of widths=%d\n",(widthsum-a[i].width));
		printf("%lld ",(maxheight*(widthsum-w[i])));
	}
	printf("\n");
	free(a);
	free(w);
	return 0;
}



