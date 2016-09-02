#include <stdio.h>
int adj[2001][2001],visited[2001],dist[2001],parent[2001];

/*int Dfsvisit(int a,int n)
{
    visited[a]=1;
    //printf("%d",a);
    int i;
    for(i=1;i<=n;i++)
    {
        if(adj[a][i]==1)
        {
            if(visited[i]==0)
            {
                Dfsvisit(i,n);
            }
            else if(group[i]==group[a]) return 1;
        }
    }
    return 0;
}*/
typedef struct Queue{
    int arr[2000];
    int head;
    int tail;
}Queue;
int IsEmpty(Queue *q)
{
    if(q->head==q->tail) return 1;
    else return 0;
}
void Enqueue(Queue *q,int a)
{
    q->arr[q->tail]=a;
    q->tail++;
}
int Dequeue(Queue *q)
{
    q->head++;
    return q->arr[q->head-1];
}
int main(int argc, char *argv[]) 
{
    int i,j,k,n,max=0;
    scanf("%d",&n);
    Queue q;
    q.head=q.tail=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            adj[i][j]=0;
        }
        visited[i]=0;
        //group[i]=0;
        dist[i]=0;
    }
    for(i=1;i<=n;i++)
    {
        scanf("%d",&k);
        parent[i]=k;
        if(k!=-1)
        {
            adj[k][i]=1;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(parent[i]==-1)
        {
            Enqueue(&q,i);
            while(IsEmpty(&q)==0)
            {
                k=Dequeue(&q);
                for(j=1;j<=n;j++)
                {
                    if(adj[k][j]==1)
                    {
                        Enqueue(&q,j);
                        dist[j]=dist[k]+1;
                        if(dist[j]>max) max=dist[j];
                    }
                }
            }
         }
      }
      printf("%d",max);
                
   
    return 0;
}