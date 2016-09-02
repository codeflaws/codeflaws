#include<stdio.h>
#include<math.h>
#include<string.h>
/* Function to merge the two haves arr[l..m] and arr[m+1..r] of array arr[] */
void merge( int arr[],  int l, int m,  int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the sub-array
  of arr to be sorted */
void mergeSort( int arr[], int l,int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
long long int prime(long long int n)
{
    int i=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 1;
    }
    return 0;

}
int sum(int arr[],int i,int j)
{
    int s=0,k=0;
    for(k=i;k<=j;k++)
    {
        s+=arr[k];
    }
    return s;
}

int main(int argc, char *argv[])
{
    int max=10002,x=0,m=10002,t,n,a[51],b[51],c[51],d[51],i=0,j=0;
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&b[i]);

    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);

    }
    d[0]=c[0]+sum(b,0,n-2);
    for(i=1;i<n-1;i++)
    {
        d[i]=c[i]+ sum(a,0,i-1)+sum(b,i,n-2);


    }
    d[n-1]=c[n-1]+ sum(a,0,n-2);


    for(i=0;i<n;i++)
    {
        if(d[i]<max)
        {
            max=d[i];
            x=i;
        }
    }
    for(i=0;i<n;i++)
    {
        if(i==x)
            continue;
        else
        {
            if(d[i]<m)
                m=d[i];
        }
    }



    t=max+m;
    printf("%d",max,m,t);



    return 0;

}
