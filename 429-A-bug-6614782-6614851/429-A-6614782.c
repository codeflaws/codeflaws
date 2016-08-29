#include <stdio.h>
#define maxn 100005
typedef struct node
{
    struct node *next;
    int which,signj,signo,num,deep;
}Node,*NODE;
NODE nd[maxn];
int que[maxn];
int ini[maxn],goal[maxn],used[maxn],print[maxn];
int solve()
{
    int s,e,now,t,realval;
    NODE p;
    s=1,e=2,t=0;
    que[1]=1;
    nd[1]->num=ini[1],nd[1]->deep=1,nd[1]->signj=nd[1]->signo=0,used[1]=1;
    while(s<e)
    {
        //printf("nd[%d]->which=%d nd[%d]->signj=%d nd[%d]->signo=%d nd[%d]->num=%d nd[%d]->deep=%d\n",s,nd[s]->which,s,nd[s]->signj,s,nd[s]->signo,s,nd[s]->num,s,nd[s]->deep);
        if((nd[que[s]]->deep%2==1)&&(nd[que[s]]->signj==1)) realval=1-nd[que[s]]->num;
        else if((nd[que[s]]->deep%2==0)&&(nd[que[s]]->signo==1)) realval=1-nd[que[s]]->num;
        else realval=nd[que[s]]->num;
        if(realval!=goal[nd[que[s]]->which])
        {
         if(nd[que[s]]->deep%2) nd[que[s]]->signj=1-nd[que[s]]->signj;
         else nd[que[s]]->signo=1-nd[que[s]]->signo;
         print[++t]=nd[que[s]]->which;
        }
        p=nd[que[s]]->next;
        while(p)
        {
            now=p->which;
            if(!used[now])
            {
             que[e]=now,nd[que[e]]->num=ini[now],nd[que[e]]->signj=nd[que[s]]->signj,nd[que[e]]->signj=nd[que[s]]->signj,nd[que[e]]->deep=nd[que[s]]->deep+1;
             used[now]=1;
             e++;
            }
            p=p->next;
        }
        s++;
    }
    return t;
}
int main(int argc, char *argv[])
{
    int n,i,j,u,v,m;
    NODE p;
    //freopen("C:\\Users\\Shen\\Desktop\\ining.txt","r",stdin);
    while(~scanf("%d",&n))
    {
        memset(used,0,sizeof(used));
        for(i=1;i<=n;i++)
        {
         nd[i]=(Node*)malloc(sizeof(Node));
         nd[i]->which=i;
         nd[i]->next=NULL;
        }
        for(i=1;i<n;i++)
        {
         scanf("%d%d",&u,&v);
         p=(Node*)malloc(sizeof(Node));
         p->next=nd[u]->next;
         p->which=v;
         nd[u]->next=p;
         p=(Node*)malloc(sizeof(Node));
         p->next=nd[v]->next;
         p->which=u;
         nd[v]->next=p;
        }
        for(i=1;i<=n;i++)
         scanf("%d",&ini[i]);
        for(i=1;i<=n;i++)
         scanf("%d",&goal[i]);
        m=solve();
        printf("%d\n",m);
        for(i=1;i<=m;i++)
         printf("%d\n",print[i]);
    }
    return 0;
}
