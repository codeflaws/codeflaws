#include <stdio.h>
#define MAX 100001

int main(int argc, char *argv[])
{
    double n,m,k,V[MAX], Vdif[MAX], O[MAX][3], Odif[MAX],c;
    long i,a,b;
    scanf("%lf %lf %lf", &n,&m,&k);
    V[0] = Vdif[0]= Odif[0] = 0;
    for(i=1;i<=n;i++)
    {
        scanf("%lf", &V[i]);
        Vdif[i] = V[i] - V[i-1];
    }
    for(i=1;i<=m;i++)
    {
        scanf("%lf %lf %lf", &O[i][0], &O[i][1], &O[i][2]);
        Odif[i] = 0;
    }
    for(i=1;i<=k;i++)
    {
        scanf("%ld %ld", &a, &b);
        Odif[a] = Odif[a]+1;
        if(b != m)
        {
            Odif[b+1]= Odif[b+1]-1;
        }
    }
    for(i=1;i<=m;i++)
    {
        Odif[i] = Odif[i-1] + Odif[i];
        O[i][2] = O[i][2]*Odif[i];
    }
    for(i=1;i<=m;i++)
    {
        a = O[i][0];
        b = O[i][1];
        c = O[i][2];
        Vdif[a] = Vdif[a]+c;
        if(b != n)
        {
            Vdif[b+1]= Vdif[b+1]-c;
        }
    }
    for(i=1;i<=n;i++)
    {
        Vdif[i] = Vdif[i-1] + Vdif[i];
        printf("%.0f", Vdif[i]);
        if(i==n)
        {
            printf("\n");
        }
        else
        {
            printf(" ");
        }
    }
    return 0;
}
