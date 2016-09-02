#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,a[100000],count=0,sum=0,total;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1) sum=sum+a[i];
        else if(a[i]==-1)
        {
            if(sum!=0) sum--;
            count++;
        }
    }
    printf("%d",count);
return 0;
}
