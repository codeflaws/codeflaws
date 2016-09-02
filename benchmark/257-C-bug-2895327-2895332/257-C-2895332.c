#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI acos(-1.0)

typedef struct
{
    int x,y;
    double p;
} Point;
Point P[100001];

int cmp(const void *a,const void *b)
{
    return (*(Point *)a).p>(*(Point *)b).p?1:-1;
}

int main(int argc, char *argv[])
{
    int N,i,Cnt;
    double d,Min;
    scanf("%d",&N);
    for(i=0; i<N; ++i)
    {
        scanf("%d %d",&P[i].x,&P[i].y);
        if(P[i].x==0&&P[i].y>0)
        {
            P[i].p=0;
        }
        if(P[i].y==0&&P[i].x>0)
        {
            P[i].p=90;
        }
        if(P[i].x==0&&P[i].y<0)
        {
            P[i].p=180;
        }
        if(P[i].y==0&&P[i].x<0)
        {
            P[i].p=270;
        }
        if(P[i].x!=0&&P[i].y!=0)
        {
            if(P[i].x>0&&P[i].y>0)
            {
                P[i].p=atan(1.0*P[i].x/P[i].y)*180.0/PI;
            }
            if(P[i].x>0&&P[i].y<0)
            {
                P[i].p=180+atan(1.0*P[i].x/P[i].y)*180.0/PI;
            }
            if(P[i].x<0&&P[i].y<0)
            {
                P[i].p=180+atan(1.0*P[i].x/P[i].y)*180.0/PI;
            }
            if(P[i].x<0&&P[i].y>0)
            {
                P[i].p=360+atan(1.0*P[i].x/P[i].y)*180.0/PI;
            }
        }
    }
    qsort(P,N,sizeof(Point),cmp);
    Cnt=1;
    for(i=1;i<N;++i)
    {
        if(P[i].p!=P[Cnt-1].p)
        {
            P[Cnt++].p=P[i].p;
        }
    }
    N=Cnt;
    for(Min=360,i=0; i<N; ++i)
    {
        if(i==N-1)
        {
            d=P[0].p-P[i].p+360;
        }
        else
        {
            d=P[i+1].p-P[i].p+360;
        }
        if(d-360>1e-8)
        {
            d-=360;
        }
        d=360-d;
        if(d<Min)
        {
            Min=d;
        }
    }
    printf("%.10f\n",Min);
    return 0;
}
