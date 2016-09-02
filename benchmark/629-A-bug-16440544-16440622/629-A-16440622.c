#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,j,A[110],B[110],sum;
    char a;
    while(scanf("%d",&n)!=EOF)
    {
        getchar();
        for(i=1;i<=n;i++)
        {
            A[i]=0;
            B[i]=0;
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                a=getchar();
                if(a=='C')
                {
                    A[i]++;
                    B[j]++;
                }
            }
            getchar();
        }
        sum=0;
        for(i=1;i<=n;i++)
        {
            if(A[i]>1)
            sum+=(A[i]*(A[i]-1))/2;
            if(B[i]>1)
            sum+=(B[i]*(B[i]-1))/2;
        }
        printf("%d\n",sum);
    }
    return 0;
}
