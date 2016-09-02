#include<stdio.h>
#include<math.h>
/* Function to merge the two haves arr[l..m] and arr[m+1..r] of array arr[] */
void merge(int arr[], int l, int m, int r)
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
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}



int main(int argc, char *argv[])
{
     int n,m=0;
    int i=0,k,j=0,count=0,t=0,c[200002],flag=0,a[100000],b[100000];
    scanf("%d %d",&n,&k);
    char s[11][11];
     for(i=0;i<=n*k;i++)
        b[i]=1;
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
        b[a[i]]=2;
        }

    for(i=0;i<k;i++)
    {
        printf("%d ",a[i]);
        b[a[i]]=0;
        for(j=1;j<=n*k;j++)
        {
            if(b[j]==1)
                {
                    printf("%d ",j);
                b[j]=0;
                m++;
                if(m==n-1)
                    break;
                }
        }


        printf("\n");
    }

    return 0;


}
