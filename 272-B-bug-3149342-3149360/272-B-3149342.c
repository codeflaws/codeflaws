#include <stdio.h>

typedef long long LL;

int A[100000];

int F(int x)
{
    int res;
    if(x==1)
    {
        return 1;
    }
    res=0;
    while(x!=1)
    {
        if(x&1)
        {
            ++res;
        }
        x/=2;
    }
    return res+1;
}

int main(int argc, char *argv[])
{
    int N,i,j;
    LL Sum,Cnt;
    scanf("%d",&N);
    for(i=0; i<N; ++i)
    {
        scanf("%d",&A[i]);
        A[i]=F(A[i]);
    }
    for(Sum=0,i=1; i<33; ++i)
    {
        for(Cnt=j=0; j<N; ++j)
        {
            if(A[j]==i)
            {
                ++Cnt;
            }
        }
        Sum+=Cnt*(Cnt-1);
    }
    return 0;
}
