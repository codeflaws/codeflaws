#include <stdio.h>

int n;
long long int a[10000];
long long int b[10000];

void merge(int left,int mid,int right)
{
    int i=left;
    int j=mid+1;
    int k=left;
    int r,c;
    while(i<=mid && j<=right)
    {
        if(a[i]>a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    if(i>mid)
    {
        for(c=j;c<=right;c++)
        {
            b[k]=a[c];
            k++;
        }
    }
    else
    {
        for(c=i;c<=mid;c++)
        {
            b[k]=a[c];
            k++;
        }
    }
    for(r=left;r<k;r++)
    {
        a[r]=b[r];
    }
}



void msort(int left,int right)
{
    int i;
    if(left<right)
    {
        int mid=(left+right)/2;
        msort(left,mid);
        msort(mid+1,right);
        merge(left,mid,right);
        /*   for(i=left;i<=right;i++)
             printf("%d ",b[i]);
             printf("\n");*/
    }
}


int main(int argc, char *argv[])
{
    int i,j,k,c,l;
    scanf("%d %d",&n,&l);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    c=0;
    msort(0,n-1);
    for(i=0;i<n;i++)
    {
        if(c>=l)
            break;
        for(j=i;j<n;j++)
        {
            if(c>=l)
                break;
            c++;
            printf("%d ",i+1);
            for(k=0;k<i;k++)
                printf("%lld ",a[k]);
            printf("%lld\n",a[j]);
        }
    }
    return 0;
}
