#include<stdio.h>
#include<math.h>
int arr[1005][1005];
int main(int argc, char *argv[])
{
    int n,k,d,i,j;
    scanf("%d %d %d",&n,&k,&d);

    int q,gap=1;
    for(i=0;i<d;++i)
    {
        for(q=0;q<gap && q<n;++q)
        {
            int ct=0 ;
            for(j=q;j<n;j+=gap)
            {
                arr[i][j]=ct+1;
                ++ct;
                ct=ct%k;
            }
        }
        gap=gap*k;
        if(gap>n)
            gap=n+3;
    }
    if(gap<n)
        printf("-1");
    else
    {
        for(i=0;i<d;++i)
        {
            for(j=0;j<n;++j)
                printf("%d ",arr[i][j]);
            printf("\n");
        }
    }
    return 0;
}
