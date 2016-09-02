#include<stdio.h>
#include<stdlib.h>
#define Max 100010
int vis[Max],goal[Max],init[Max],cnt=0,ans[Max];
typedef struct list
{
	int data;
	struct list* next;
}list;
list *head[Max];
void insert(int a,int b)
{
	list *node=(list*)malloc(sizeof(list));
	node->data=b;
	node->next=head[a];
	head[a]=node;
}
void dfs(int i,int flipe,int flipo,int height)
{
	if(!vis[i])
	{
		vis[i]=1;
		//printf("%d enetered case 1 with %d even and %d odd flips and height=%d\n",i,flipe,flipo,height);
		if(goal[i]!=init[i])
		{
			if(height%2==0 && flipe%2==0)
			{
				//printf("%d\n",i);
				cnt++;
				ans[cnt]=i;
				flipe++;
			}
			else if(height%2==1 && flipo%2==0)
			{
				//printf("%d\n",i);
				cnt++;
				ans[cnt]=i;
				flipo++;
			}
		}
		else
		{
			if(height%2==0 && flipe%2==1)
			{
				//printf("%d\n",i);
				cnt++;
				ans[cnt]=i;
				flipe++;
			}
			else if(height%2==1 && flipo%2==1)
			{
				//printf("%d\n",i);
				cnt++;
				ans[cnt]=i;
				flipo++;
			}
		}
		list *temp=head[i];
		while(temp!=NULL)
		{
			dfs(temp->data,flipe,flipo,height+1);
			temp=temp->next;
		}
	}
}
int main(int argc, char *argv[])
{
	int v,e,i,a,b;
	scanf("%d%d",&v,&e);
	for(i=0;i<e;i++)
	{
		scanf("%d%d",&a,&b);
		insert(a,b);
		insert(b,a);
	}
	for(i=1;i<=v;i++)
		scanf("%d",&init[i]);
	for(i=1;i<=v;i++)
		scanf("%d",&goal[i]);
	/*for(i=1;i<=v;i++)
	{
		printf("%d has ",i);
		list *temp=head[i];
		while(temp!=NULL)
		{
			printf("%d--",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}*/
	dfs(1,0,0,0);
	printf("%d\n",cnt);
	for(i=1;i<=cnt;i++)
		printf("%d\n",ans[i]);
	return 0;
}
