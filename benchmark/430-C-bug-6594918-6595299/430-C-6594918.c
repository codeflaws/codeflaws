#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cur[100010],tar[100010],val[100010],op,stk[100010],temp[100010];
struct node{
    int v,c;
    struct node *next;
};
void init(int n,struct node *p[n],struct node *v[n]){
    int i=1;
    while (i<n) {
        v[i]=malloc(sizeof(struct node));
        v[i]->v=i;
        v[i]->next=NULL;
        v[i]->c=1;
        p[i]=NULL;
        i++;
    }
}

void create(int n,struct node *p[n],struct node *v[n],int x,int y){
    struct node *a=malloc(sizeof(struct node)),*b=malloc(sizeof(struct node));
    a->v=y;
    b->v=x;
    a->c=1;b->c=1;
    a->next=p[x];
    b->next=p[y];
    p[x]=a;
    p[y]=b;
}
int main(int argc, char *argv[]){
    int n,i=1;
    scanf("%d",&n);
    struct node *p[n+1],*v[n+1];
    init(n+1, p, v);
    while (i<n) {
        int a,b;
        scanf("%d %d",&a,&b);
        create(n+1, p, v, a, b);
        create(n+1, p, v, b, a);
        i++;
    }
    i=1;
    while (i<=n) {
        scanf("%d",&cur[i]);
        i++;
    }
    
    i=1;
    while (i<=n) {
        scanf("%d",&tar[i]);
        i++;
    }
    //dfs(n+1, p, v, 1);
    int rear=0,front=1;
    stk[rear]=1;
    v[stk[rear]]->c=0;
    while (rear<front) {
        int cc=0;
        if(((cur[stk[rear]]+val[stk[rear]])%2)!=tar[stk[rear]]){
            val[stk[rear]]++;
            temp[op]=stk[rear];
            //printf("k %d \n",val[stk[rear]]);
            cc=1;
            op++;
        }
        struct node *n=p[stk[rear]];
        while (n!=NULL) {
            if(v[n->v]->c==1){
                stk[front++]=n->v;
                v[n->v]->c=0;
            }
                struct node *nn=p[n->v];
                while (nn!=NULL) {
                    if(v[nn->v]->c==1){
                    stk[front++]=nn->v;
                    v[nn->v]->c=0;
                    if(cc==1)
                        val[nn->v]++;
                    //printf("%d %d %d \n",stk[rear],nn->v,val[nn->v]);
                }
                    nn=nn->next;
                }
            n=n->next;
        }
        rear++;
    }
    printf("%d\n",op);
    i=0;
    while (i<op) {
        printf("%d\n",temp[i]);
        i++;
    }
    return 0;
}