// C program for insertion sort
#include <stdio.h>
#include <math.h>
#include<string.h>
#include<stdlib.h>
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;

       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
int sumi(int arr[],int n, int m)
{
    int i,sum=0;
    for(i=n;i<=m;i++)
    {
        sum+=arr[i];
    }
    return sum;

}
int main(int argc, char *argv[])
 {
     int n,i,j,k,a,temp,count=0,sum=0,arr[100005],arr1[105]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        arr[i+n]=arr[i];
    }
    scanf("%d %d",&k,&j);
    if(k>j)
    {
        temp=k;
        k=j;
        j=temp;
    }
    a=sumi(arr,k-1,j-2)<sumi(arr,j-1,k+n-1)?sumi(arr,k-1,j-2):sumi(arr,j-1,k+n-1);

    if(k==1 && j==n)
        a=arr[n-1]<sumi(arr,0,n-2)?arr[n-1]:sumi(arr,0,n-2);
    printf("%d",a);


     return 0;
 }
