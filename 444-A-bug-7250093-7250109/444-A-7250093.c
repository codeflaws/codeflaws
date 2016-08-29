#include <stdio.h>
#include <stdlib.h>

int nodes[500];

struct edge
{
    int a;
    int b;
    double value;
};

struct edge edges[124750];

int cmp(const void* a,const void* b)
{
    struct edge *c,*d;
    c=(struct edge*)a;
    d=(struct edge*)b;
    return d->value-c->value;
}
int main(int argc, char *argv[])
{
    int n,m;
    int i,max;
    memset(nodes,sizeof(int),500);
    memset(edges,sizeof(struct edge),124750);
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%d",&nodes[i]);
    if(m==0)
    {
        printf("0.000000000000000\n");
        return 0;
    }
    max=0;
    for(i=0;i<m;i++)
    {
        scanf("%d %d %lf",&edges[i].a,&edges[i].b,&edges[i].value);
        edges[i].value=(nodes[edges[i].a-1]+nodes[edges[i].b-1])/edges[i].value;
        if(edges[i].value>max)
            max=edges[i].value;
    }
    printf("%.*lf\n",15,max);
    return 0;
}
