#include<stdio.h>
int global_sum=-20000001;
int findsum(int *arr,int diff,int start,int size)
{
    int sum=0;
    int new_size=size/diff;
    if(new_size<3)
    {
        return -20000001;
    }
    else
    {

        int i;
        for(i=start;i<size;i+=diff)
        {
            sum+=arr[i];
        }

    }
    return sum;
}
int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);

    int *arr=(int *)malloc(sizeof(int)*n);
    int i=1,j;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            for(j=1;j<=i;j++)
            {
                int x=findsum(arr,i,j-1,n);
                if(x>global_sum)
                    global_sum=x;
            }
        }
    }
    printf("%d",global_sum);
}
