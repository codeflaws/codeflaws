#include<stdio.h>
double F[51][51][51];
int size[51];
double tot=0;
int N,P;
void init();
void dpit();
int main(int argc, char *argv[])
{
    init();
    dpit();
    return 0;
}
void init()
{
    int i;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&size[i]);
        tot+=size[i];
    }
    scanf("%d",&P);
}
void dpit()
{
    int i,j,k,v;
    double ave=0,tp=0,t;
    if(tot<=P){
    printf("%.10lf\n",N);
    //return 0;
    }
    else {
    for(i=0;i<=N;i++)
    F[i][0][0]=1;
    for(k=1;k<=N;k++)
    {
        for(i=k-1;i<=N;i++)
        if(i==k)
        {
            for(j=1;j<=N;j++)
            for(v=1;v<=P;v++)
            F[i][j][v]=F[i-1][j][v];
        }else if(i>0)
        for(j=1;j<=N;j++)
        for(v=1;v<=P;v++)
        if(v<size[i])F[i][j][v]=F[i-1][j][v];
        else F[i][j][v]=F[i-1][j][v]+F[i-1][j-1][v-size[i]];

        for(j=1,tp=0;j<=N;j++)
        for(v=P-size[k]+1;v<=P;v++,ave+=tp,tp=0)
        if(F[N][j][v])
        {
            tp=F[N][j][v]*j;
            t=N;
            for(i=j;i>=1;i--,t--)
            tp=tp*i/t;
            for(i=N-j-1;i>=1;i--,t--)
            tp=tp*i/t;
        }
    }
    printf("%.10lf\n",ave);
    }
}
