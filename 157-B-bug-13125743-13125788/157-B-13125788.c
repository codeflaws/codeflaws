#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
void merge( int arr[],  int l,  int m, int r)
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
void mergeSort( int arr[],int l,  int r)
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
    int x,y,z,b[100002],i=0,sum=0,a[100005]={0},left[2],right[2],r=0,min=100023,flag=0,n,k,x1,x2,y1,y2,l=0,count=0,max=0,q;
    double pi=3.1415926536,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    mergeSort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            c+=a[i]*a[i];
        else
            c-=a[i]*a[i];
    }
    printf("%.10f",abs(c)*pi);




 return 0;
 }

