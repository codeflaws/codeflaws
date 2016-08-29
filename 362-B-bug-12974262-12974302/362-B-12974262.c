#include<stdio.h>
//#include<conio.h>
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
    int b[100002],flag=0,i,n,j,k,x1,x2,y1,y2,l,m,count=0,max=0,q,a[100004]={0};
    double d;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
         scanf("%d",&a[i]);
    }
    mergeSort(a,0,m-1);
    if(a[0]==1 || a[m-1]==n ||m==n)
        flag=1;
    else
    {
        for(i=0;i<m-3;i++)
        {
            if(a[i+2]==a[i]+2)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
        printf("YES");
    else
        printf("NO");
 return 0;
 }

