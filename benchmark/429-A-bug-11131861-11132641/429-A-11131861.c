#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
node * head[100005];
int status[100005];

node* insert(node* root,int val)
{
	node *temp=malloc(sizeof(node));
	temp->data=val;
	temp->next=root;
	return temp;
}
int orig[100005],tar[100005];
int count=0;
int ans[100005];

void swap(int src)
{
	if(orig[src]==0)
		orig[src]=1;
	else 
		orig[src]=0;
}

void change_dfs(int src,int level)
{
	if(level%2==0)
	{
		if(orig[src]!=tar[src])
			swap(src);
		else
		{
			ans[count]=src;
			count++;
		}
	}
	node * temp=head[src];
	while(temp!=NULL)
	{
		if(status[temp->data]==0)
		{
			status[temp->data]=2;
			change_dfs(temp->data,level+1);
			status[temp->data]=0;
		}
		temp=temp->next;
	}
}


void dfs(int src)
{
//	if(src==7)
//		printf("seven is here\n");
	if(orig[src]!=tar[src])
	{
		ans[count]=src;
		count++;
	//	swap(src);
		change_dfs(src,0);
	}

	node*temp=head[src];
	while(temp!=NULL)
	{
		if(status[temp->data]!=1)
		{
			status[temp->data]=1;
			dfs(temp->data);
		}
		temp=temp->next;
	}
}

int main(int argc, char *argv[])
{
	int n,i,j;
	scanf("%d",&n);
	int var=n-1;
	while(var--)
	{
		int l,k;
		scanf("%d%d",&l,&k);
		head[l]=insert(head[l],k);
		head[k]=insert(head[k],l);
	}
	
	for(i=1;i<=n;i++)
		scanf("%d",&orig[i]);
	for(i=1;i<=n;i++)
		scanf("%d",&tar[i]);
	status[1]=1;
	dfs(1);
	printf("%d\n",count);
	for(i=0;i<count;i++)
		printf("%d\n",ans[i]);
//	for(i=1;i<=n;i++)
//		printf("%d %d\n",orig[i],tar[i]);
	return 0;
}
