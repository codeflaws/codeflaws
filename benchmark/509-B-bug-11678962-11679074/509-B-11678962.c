#include<stdio.h>
#include<limits.h>
int main(int argc, char *argv[])
{
    int n,k,i,min=INT_MAX,max=INT_MIN,j,m;
    scanf("%d %d",&n,&k);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]>max)
            max=array[i];
        if(array[i]<min)
            min=array[i];
    }
    if((max/k-min/k)>1)
    {
        printf("NO");
        return 0;
    }
    printf("YES\n");
    for(i=0;i<n;i++)
    {
        m=1;
        for(j=0;j<array[i];j++)
        {
            printf("%d ",m);
            m++;
            if(m==k+1)
                m=1;
        }
        printf("\n");
    }
    return 0;
}
