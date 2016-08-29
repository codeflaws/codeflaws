#include<stdio.h>
void swap(int *a,int *b) {*a=*b+*a-(*b=*a);}
int sorted(int a[],int n)
{
    int i;
    for(i=2;i<=n;i++)
    {
        if(a[i]<a[i-1])
        break;
    }
    if(i==n+1)
    return 1;
    for(i=2;i<=n;i++)
    {
        if(a[i]>a[i-1])
        break;
    }
    if(i==n+1)
    return 1;
    return 0;
}
int main(int argc, char *argv[])
{
    int arr[100005],i,n,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",arr+i);
    if(n<3)
    {printf("-1");return 0;}
    i=2;
        while(arr[i]==arr[i-1]&&i<=n)
        i++;
        if(i>n)
        {printf("-1");return 0;}
        if(i==n)
        {
        printf("2 %d",n);
        return 0;
        }
        for(j=1;j<n;j++)
        {
            if(j==i)
            continue;
            
            swap(&arr[j],&arr[i]);
            if(!sorted(arr,n))
            {printf("%d %d",j,i);return 0;}
            swap(&arr[j],&arr[i]);
            
        }
        printf("-1");
        return 0;
}