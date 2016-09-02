#include<stdio.h>
int main(int argc, char *argv[])
{
    int m,i,j,n;
    long long min,s,max;
    scanf("%d %d",&n,&m);
    max=0;
    for(i=0;i<n;i++)
    {
        min=1000000001;
        for(j=0;j<m;j++)
        {
            scanf("%I64d",&s);
            if(min>s)
            min= s;
        }
        if(min>max)
        max=min;
    }
    printf("%I64d",max);
    return 0;
}
