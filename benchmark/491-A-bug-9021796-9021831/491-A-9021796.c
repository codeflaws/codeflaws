#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int A,B,i,N;
    int t[100000];
    scanf("%d",&A);
    scanf("%d",&B);
    N=A+B+1;
    if (A==0)
    {
        for(i=0;i<N;i++)
        {
            t[i]=N-i;
        }
    }
    else if (B==0)
    {
        for (i=0;i<N;i++)
        {
            t[i]=i+1;
        }
    }
    else
    {
        t[0]=1;
        t[1]=3;
        t[N-1]=2;
        t[A]=N;
        for(i=2;i<A;i++)
        {
            t[i]=i+1;
        }
        for(i=A+1;i<A+B;i++)
        {
            t[i]=N-i+A;
        }
    }
    for(i=0;i<N;i++)
    {
        printf("%d ",t[i]);
    }
    return 0;
}
