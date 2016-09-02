#include<stdio.h>
int main(int argc, char *argv[])
{
    int baldosas[1000];
    int destruidas[1000]={0};
    int dias,N,j,cont,c;
    dias=-1;
    scanf("%d",&N);

    for(j=0;j<N;j++)
    {
        scanf("%d",&baldosas[j]);
    }
    cont=0;
    c=0;
    while(c!=1 && cont<=N/2)
    {
        dias++;
        j=0;
        while(j<=N-1 && c!=1)
        {
            if(baldosas[j]==dias)
            {
                destruidas[j]=1;
                cont++;
                if(j==0 && destruidas[j+1]==1)
                    c=1;
                else if(j==N-1)
                    c=1;
                else if(destruidas[j-1]==1 || destruidas[j+1]==1)
                    c=1;
            }
            j++;
        }
    }
    printf("%d",dias);
    return 0;
}
