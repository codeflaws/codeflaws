#include<stdio.h>
#include<stdlib.h>
#define sf scanf
int init[100001],goal[100002],visited[100002]={};
int print[100001];
int count=0;
typedef struct node{
	int data;
	struct node* next;

}node;
node* vertex[100001]={NULL};
node* insert(node *head, int data)
{
	if(head==NULL)
	{
		head=(node* )malloc(sizeof(node));
		head->data=data;
		head->next=NULL;
	}
	else
		{
			node* temp;
			temp=(node*)malloc(sizeof(node));
			temp->data=data;
			temp->next=head;
			head=temp;
		}
return head;
}
void dfs(int parentNode,int flipCur,int flipNext)
{
	if(!visited[parentNode])
		visited[parentNode]=1;
	else
		return ;
	if(!flipCur)
	{
		int flipped=0;
		if(init[parentNode]!=goal[parentNode])
		{
			flipped=1;
			print[count++]=parentNode;
		}
			int i;
			node * temp=vertex[parentNode];
			while(temp!=NULL)
			{
				dfs(temp->data,flipNext,flipped);
				//printf("%d ",temp->data);
				temp=temp->next;
			}
			
	}
	else
	{
		int flipped=1;
		if(init[parentNode]==goal[parentNode])
		flipped=0,print[count++]=parentNode;

		node *temp=vertex[parentNode];
			while(temp!=NULL)
			{
				dfs(temp->data,flipNext,flipped);
				temp=temp->next;
			}
	}
}
int  main(int argc, char *argv[])
{
	int N,i,a,b;
	sf("%d",&N);

	node *temp;
	for(i=0;i<N-1;i++)
	{
		sf("%d%d",&a,&b);
		vertex[a]=insert(vertex[a],b);
		vertex[b]=insert(vertex[b],a);
	}

	for(i=1;i<N+1;i++)
		sf("%d",&init[i]);
	for(i=1;i<N+1;i++)
		sf("%d",&goal[i]);
	dfs(1,0,0);
	printf("%d\n",count);
	for(i=0;i<count;i++)
		printf("%d\n",print[i]);
	//printf("%d\n",count );
	return 0;
}