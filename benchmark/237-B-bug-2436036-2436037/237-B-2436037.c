#include <stdio.h>

typedef struct
{
    int i,j;
} Node;
Node Min;
Node Ans[2600][2];

int main(int argc, char *argv[])
{
    int N,i,j,ii,jj,Sum,Cnt,min,temp;
    int C[50],A[50][50];
    scanf("%d",&N);
    for(Sum=i=0; i<N; ++i)
    {
        scanf("%d",&C[i]);
        Sum+=C[i];
    }
    for(i=0; i<N; ++i)
    {
        for(j=0; j<C[i]; ++j)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(Cnt=i=0; i<N; ++i)
    {
        for(j=0; j<C[i]; ++j)
        {
            Min.i=Min.j=-1;
            min=3000;
            for(ii=i+1; ii<N; ++ii)
            {
                for(jj=j+1; jj<C[ii]; ++jj)
                {
                    if(A[ii][jj]<min)
                    {
                        min=A[ii][jj];
                        Min.i=ii;
                        Min.j=jj;
                    }
                }
            }
            for(jj=j+1; jj<C[i]; ++jj)
            {
                if(A[i][jj]<min)
                {
                    min=A[i][jj];
                    Min.i=i;
                    Min.j=jj;
                }
            }
            for(ii=i+1; ii<N&&j<C[ii]; ++ii)
            {
                if(A[ii][j]<min)
                {
                    min=A[ii][j];
                    Min.i=ii;
                    Min.j=j;
                }
            }
            if(min<A[i][j])
            {
                temp=A[Min.i][Min.j];
                A[Min.i][Min.j]=A[i][j];
                A[i][j]=temp;
                Ans[Cnt][0].i=i;
                Ans[Cnt][0].j=j;
                Ans[Cnt][1].i=Min.i;
                Ans[Cnt][1].j=Min.j;
                ++Cnt;
            }
        }
    }
    printf("%d\n",Cnt);
    for(i=0; i<Cnt; ++i)
    {
        printf("%d %d %d %d\n",Ans[i][0].i+1,Ans[i][0].j+1,Ans[i][1].i+1,Ans[i][1].j+1);
    }
    return 0;
}
