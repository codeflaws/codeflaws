#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,i,j,v,p,k,winner,z,x;
    scanf("%d %d",&n,&m);
    int ara[n];
    for(k=0;k<n;k++) ara[k]=0;
    for(i=0;i<m;i++)
    {
        p=0;
        x=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&v);
            if(v>p)
            {
                p=v;
                x=j;
            }
        }
        ara[x]++;
        //printf("ara[%d]= %d\n",x,ara[x]);

    }
    //printf("%d",ara[2]);
    z=ara[0];
    winner=1;
    for(k=0;k<n;k++)
    {
        if(ara[k]>z)
        {
            z=ara[k];
            winner=k+1;

        }
    }

    printf("%d",winner);
return 0;
}