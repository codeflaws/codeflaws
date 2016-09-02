#include <stdio.h>

#define MAXV    100
#define MAXE    (MAXV*MAXV)

typedef struct
{
    int to;
    int next;
} Edge_t;
Edge_t E[MAXE];
int SizeE;
int Adj[MAXV];
char Visited[MAXV];

typedef struct
{
    int x, y;
} Point_t;
Point_t P[MAXV];

void Init(int N)
{
    int i;
    for(i=0; i<=N; ++i)
    {
        Adj[i] = -1;
    }
    SizeE = 0;
}

void Add_Edge(int u, int v)
{
    E[SizeE].to = v;
    E[SizeE].next = Adj[u];
    Adj[u] = SizeE++;
}

void BFS(int start)
{
    int Queue[MAXV];
    int Head, Tail, Cnt, i, j;
    Head = 0;
    Tail = Cnt = 1;
    Visited[start] = 1;
    Queue[0] = start;
    while(Head < Tail)
    {
        for(i=Head; i<Tail; ++i)
        {
            for(j=Adj[Queue[i]]; ~j; j=E[j].next)
            {
                if(!Visited[E[j].to])
                {
                    Visited[E[j].to] = 1;
                    Queue[Cnt++] = E[j].to;
                }
            }
        }
        Head = Tail;
        Tail = Cnt;
    }
}

int main(int argc, char *argv[])
{
    int N, i, j, Cnt;
    scanf("%d", &N);
    Init(N);
    for(i=0; i<N; ++i)
    {
        scanf("%d %d", &P[i].x, &P[i].y);
        for(j=0; j<i; ++j)
        {
            if(P[i].x==P[j].x || P[i].y==P[j].y)
            {
                Add_Edge(i, j);
                Add_Edge(j, i);
            }
        }
    }
    Cnt = 0;
    for(i=0; i<N; ++i)
    {
        if(!Visited[i])
        {
            ++Cnt;
            BFS(i);
        }
    }
    printf("%d\n", Cnt-1);
    return 0;
}
