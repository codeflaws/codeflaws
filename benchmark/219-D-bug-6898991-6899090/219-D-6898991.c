#include <stdio.h>
 
int *visited; 

int *length;

int *reds;

int totalreds;

typedef struct node
{
    int a;
    struct node* next;
} link;
 
void insert(link* head, int i)
{
    link* temp;
    temp = (link*)malloc(sizeof(link));
    temp->a = i;
 
    link* t;
    t = head->next;
    head->next = temp;
    temp->next = t;
} 

void printlist(link* head)
{
    while(head!=NULL)
    {
        printf("%d ",head->a);
        head = head->next;
    }
    printf("\n");
}

void dfs(link** red,link** green,int index)
{
    visited[index] = 1;
    link* temp;
    temp = red[index];
    temp = temp->next;
    
    while(temp!=NULL)
    {
        if(visited[temp->a]==0)
        {
            length[temp->a] = length[index] + 1;
            dfs(red,green,temp->a);
        }
        temp = temp->next;
    }
    
    temp = green[index];
    temp = temp->next;
    
    while(temp!=NULL)
    {
        if(visited[temp->a] == 0)
        {
            length[temp->a] = length[index] + 1;
            reds[temp->a] = reds[index] + 1;
            totalreds++;
            dfs(red,green,temp->a);
        }
        temp = temp->next;
    }
    return;
}

int main(int argc, char *argv[]) {
    link** red;
    link** green;
    
    int n;
    scanf("%d",&n);
    
    red = (link**)malloc(sizeof(link*)*n);
    green = (link**)malloc(sizeof(link*)*n);
    visited = (int*)malloc(sizeof(int)*n);
    length = (int*)malloc(sizeof(int)*n);
    reds = (int*)malloc(sizeof(int)*n);
    
    int x;
    for(x=0;x<n;x++)
    {
        red[x] = (link*)malloc(sizeof(link));
        red[x]->a = x;
        red[x]->next = NULL;
        
        green[x] = (link*)malloc(sizeof(link));
        green[x]->a = x;
        green[x]->next = NULL;
        
        visited[x] = 0;
        length[x] = 0;
        reds[x] = 0;
    }
    
    int s,t;
    
    for(x=1;x<=n-1;x++)
    {
        scanf("%d %d",&s,&t);
        s--;t--;
        insert(red[s],t);
        insert(green[t],s);
    }
    
    totalreds = 0;
    
    dfs(red,green,0);
    
    int ans[200100];
    
    int min = 100000000;
    
    for(x=0;x<n;x++)
    {
        ans[x] = totalreds + length[x] - (2*reds[x]);
        if(ans[x]<min)min = ans[x];
    }
    
    printf("%d\n",min);
    
    for(x=0;x<n;x++)
    {
        if(min==ans[x])printf("%d ",x+1);
    }
    
    return 0;
}
